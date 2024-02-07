#if !defined(NODE_H)
#define NODE_H

#include "State.h"
#include "Problem.h"
#include "string"

class Node
{
private:
    Node* parent;
    std::vector<std::vector<int>> nodeBoard;
    std::string action;
    double pathCost;

public:

    Node (State &state,std::string action);
    Node (State &state);
    Node (State &state,Node* parent,std::string action,double pathCost);
    Node (State &state,Node* parent,std::string action);
    

    
    void printBoard();
    std::vector<std::vector<int>> getNodeBoard();
    Node* getParent();
    std::string getAction();
    double getPathCost();
    bool isRoot();

};





#endif // NODE_H
