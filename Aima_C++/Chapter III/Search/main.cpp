#include "Problem.h"
#include "Node.h"
#include "queue"
#include "list"



bool breadthFirstSearch(Problem &problem){
    State state;
    state.generateRandomInitialState();
    Node node(state);
    if(problem.goalTest(node)){
        //Find Solution
        return true;
    }
    std::queue<Node> frontier;
    frontier.push(node);
    std::vector<Node> explored;
    while(!frontier.empty()){
        node = frontier.front();
        frontier.pop();
        explored.push_back(node);
        std::vector<std::string> actions = problem.getActions(state);
        for(const std::string& action : actions){
            
        }
    }

}

Node childNode(State &state,Problem &problem,Node &parent,std::string action){
    std::vector<std::vector<int>> nextState = problem.getResult(state, action);
    Node child(State(nextState),parent,action,parent.getPathCost());


}

int main(){
    

    return 0;
}