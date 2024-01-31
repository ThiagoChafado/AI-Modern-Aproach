#include "Problem.h"
#include "Node.h"
#include "string"

void Problem::getInitialState(){
    State state;
    state.generateRandomInitialState();
    Problem problem;
    std::vector<std::vector<int>> board = state.getBoard();
}


bool Problem::goalTest(Node &node){
    std::vector<std::vector<int>> goalBoard = {
        {0,1,2},
        {3,4,5},
        {6,7,8}
    };

    return node.getNodeBoard(node) == goalBoard;
}

State Problem::getState(){
    return state;
}

std::vector<std::string> Problem::getActions(State &state){
     return {"Left", "Right", "Up", "Down"};
}

std::vector<std::vector<int>> Problem::getResult(State &state,std::string action){
    std::vector<std::vector<int>> currentState = state.getBoard();
    //Finding 0
    int zeroRow = -1;
    int zeroCol = -1;
    for(int i=0;i<currentState.size();++i){
        for(int j=0;j<currentState[i].size();++j){
            if(currentState[i][j] == 0){
                zeroRow = i;
                zeroCol = j;
                break;
            }
        }
    }
    if (action == "Left" && zeroCol > 0) {
        // Mover left
        std::vector<std::vector<int>> resultState = currentState;
        std::swap(resultState[zeroRow][zeroCol], resultState[zeroRow][zeroCol - 1]);
        return resultState;
    } else if (action == "Right" && zeroCol < currentState[0].size() - 1) {
        // Mover right
        std::vector<std::vector<int>> resultState = currentState;
        std::swap(resultState[zeroRow][zeroCol], resultState[zeroRow][zeroCol + 1]);
        return resultState;
    } else if (action == "Up" && zeroRow > 0) {
        // Mover up
        std::vector<std::vector<int>> resultState = currentState;
        std::swap(resultState[zeroRow][zeroCol], resultState[zeroRow - 1][zeroCol]);
        return resultState;
    } else if (action == "Down" && zeroRow < currentState.size() - 1) {
        // Move down
        std::vector<std::vector<int>> resultState = currentState;
        std::swap(resultState[zeroRow][zeroCol], resultState[zeroRow + 1][zeroCol]);
        return resultState;
    } else {
        // Invalid
        return currentState; 
    }
}

