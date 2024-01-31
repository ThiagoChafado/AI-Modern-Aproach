#include "Node.h"


Node::Node(State &state){
    nodeBoard = state.getBoard();
    parent = nullptr;
    action = "";
    pathCost = 0;
}

Node::Node(State &state,Node* parent,std::string action,double pathCost){
    this->nodeBoard = state.getBoard();
    this->parent = parent;
    this->action = action;
    this->pathCost = pathCost;
}
std::vector<std::vector<int>> Node::getNodeBoard(Node &node){
    return nodeBoard;
}

Node* Node::getParent(){
    return parent;
}

std::string Node::getAction(){
    return action;
}

double Node::getPathCost(){
    return pathCost;
}

bool Node::isRoot(){
    return parent == NULL;
}