#include "Problem.h"
#include "Node.h"
#include "queue"
#include "list"
#include "Util.h"


Node childNode(State &state, Problem &problem, Node *parent, std::string action)
{
    State nextState = problem.getResult(state, action);
    Node child(nextState, parent, action);
    return child;
}

Node childNodeWithPath(State &state,Problem &problem, Node *parent, std::string action){
    State nextState = problem.getResult(state,action);
    Node child(nextState,parent,action);
    return child;
}

bool breadthFirstSearch(Problem &problem)
{
    State state;
    //state.generateRandomInitialState();
    state.setBoard({{1, 2, 3}, {4, 0, 5}, {6, 7, 8}});
    Node node(state);

    if (problem.goalTest(node))
    {
        return true;
    }
    std::queue<Node> frontier;
    frontier.push(node);
    std::vector<Node> explored;
    while (!frontier.empty())
    {
        node = frontier.front();
        frontier.pop();
        bool isExplored = false;
            for (int i = 0; i < explored.size(); i++)
            {
                if (verifyEqual(explored[i].getNodeBoard(), node.getNodeBoard()))
                {
                    isExplored = true;
                }
            }
        if(isExplored){
            continue;
        }

        node.printBoard();
        for (int i = 0; i < explored.size(); i++)
            {
                if (verifyEqual(explored[i].getNodeBoard(), node.getNodeBoard()))
                {
                    std::cout<< "Explored\n";
                }
            }
        state.setBoard(node.getNodeBoard());
        explored.push_back(node);
        std::vector<std::string> actions = problem.getActions(state);
        for (std::string &action : actions)
        {
            Node child = childNode(state, problem, &node, action);

            bool isExplored = false;
            for (int i = 0; i < explored.size(); i++)
            {
                if (verifyEqual(explored[i].getNodeBoard(), node.getNodeBoard()))
                {
                    isExplored = true;
                }
            }
            bool isChildInFrontier = false;
            std::queue<Node> frontierCopy = frontier;

            while (!frontierCopy.empty())
            {
                Node &frontierNode = frontierCopy.front();
                std::vector<std::vector<int>> frontierBoard = frontierNode.getNodeBoard();
                std::vector<std::vector<int>> childBoard = child.getNodeBoard();
                if (verifyEqual(frontierBoard, childBoard))
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
                    child.printBoard();
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
    std::cout << "Problem Created\n";
    bool solution = breadthFirstSearch(problem);
    if (solution)
    {
        std::cout << "Solution found!" << std::endl;
    }
    else
    {
        std::cout << "No solution found." << std::endl;
    }
    return 0;
}
