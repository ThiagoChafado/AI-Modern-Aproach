#include "Problem.h"
#include "Node.h"
#include "queue"
#include "list"

Node childNode(State &state, Problem &problem, std::string action)
{
    State nextState = problem.getResult(state, action);
    Node child(nextState, action);
    return child;
}

Node childNodePath(State &state,Node &parent,Problem &problem,std::string action){
    State nextState = problem.getResult(state,action);
    Node child(nextState,&;parent,action,parent.getPathCost()+1);
}

//don't found
bool breadthFirstSearch(Problem &problem)
{
    std::cout<< "enter";
    State state;
    state.generateRandomInitialState();
    Node node(state);
    std::cout<< "enter";
    if (problem.goalTest(node))
    {
        // Find Solution
        return true;
    }
    std::queue<Node> frontier;
    frontier.push(node);
    std::vector<Node> explored;
    while (!frontier.empty())
    {
        node = frontier.front();
        frontier.pop();
        node.printBoard();
        state.setBoard(node.getNodeBoard(node));
        explored.push_back(node);
        std::vector<std::string> actions = problem.getActions(state);
        for (std::string &action : actions)
        {
            Node child = childNode(state, problem, action);

            bool isExplored = false;
            for(int i=0;i<explored.size();i++){
                if (explored[i].getNodeBoard(explored[i])==child.getNodeBoard(child)){
                    isExplored = true;
                }
            }
            bool isChildInFrontier = false;
            std::queue<Node> frontierCopy = frontier;

            while (!frontierCopy.empty())
            {
                Node &frontierNode = frontierCopy.front();
                std::vector<std::vector<int>> frontierBoard = frontierNode.getNodeBoard(frontierNode);
                std::vector<std::vector<int>> childBoard = child.getNodeBoard(child);
                if (frontierBoard == childBoard)
                {
                    isChildInFrontier = true;
                    break;
                }
                frontierCopy.pop();
            }
            if (!isChildInFrontier || !isExplored)
            {
                if (problem.goalTest(child))
                {
                    return true;
                }
                frontier.push(child);
            }
            
        }
    }
    return false;
}



int main()
{
    State state;
    Problem problem(state);
    std::cout<<"Problem Created\n";
    bool solution = breadthFirstSearch(problem);
     if (solution) {
        std::cout << "Solution found!" << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }
    return 0;
}