#include "Problem.h"
#include "Node.h"
#include "string"

Problem::Problem(State &initialState) : state(initialState) {
}

State Problem::getInitialState(){
   return state; 
}


bool Problem::goalTest(Node &node){
    std::vector<std::vector<int>> goalBoard = {
        {0,1,2},
        {3,4,5},
        {6,7,8}
    };

    return node.getNodeBoard() == goalBoard;
}

State Problem::getState(){
    return state;
}

std::vector<std::string> Problem::getActions(State &state){
     return {"Left", "Right", "Up", "Down"};
}

State Problem::getResult(State &state,std::string action){
   std::vector<std::vector<int>> currentState = state.getBoard();
    //Finding 0
    int zeroRow = -1;
    int zeroCol = -1;
    for (int i = 0; i < currentState.size(); ++i) {
        for (int j = 0; j < currentState[i].size(); ++j) {
            if (currentState[i][j] == 0) {
                zeroRow = i;
                zeroCol = j;
                break;
            }
        }
    }

    if (action == "Left" && zeroCol > 0) {
        // Move left
        std::swap(currentState[zeroRow][zeroCol], currentState[zeroRow][zeroCol - 1]);
    } else if (action == "Right" && zeroCol < currentState[0].size() - 1) {
        // Move right
        std::swap(currentState[zeroRow][zeroCol], currentState[zeroRow][zeroCol + 1]);
    } else if (action == "Up" && zeroRow > 0) {
        // Move up
        std::swap(currentState[zeroRow][zeroCol], currentState[zeroRow - 1][zeroCol]);
    } else if (action == "Down" && zeroRow < currentState.size() - 1) {
        // Move down
        std::swap(currentState[zeroRow][zeroCol], currentState[zeroRow + 1][zeroCol]);
    }

    //returning the object
    State resultState;
    resultState.setBoard(currentState);

    return resultState;
}

