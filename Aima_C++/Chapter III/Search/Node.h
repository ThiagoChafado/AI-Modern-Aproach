#if !defined(NODE_H)
#include "State.h"
#include "string"
#define NODE_H

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
    void printBoard();
    std::vector<std::vector<int>> getNodeBoard(Node &node);
    Node* getParent();
    std::string getAction();
    double getPathCost();
    bool isRoot();

};





#endif // NODE_H
