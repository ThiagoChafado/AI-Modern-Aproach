#include "Enviroment.h"

Enviroment::~Enviroment(){}
Enviroment::Enviroment(int qtd){
    setQtdSquares(qtd);
}

int Enviroment::getQtdSquares(){
    return qtdSquares;
}

void Enviroment::setQtdSquares(int qtd){
    qtdSquares = qtd;
    initialize();
}

//initialize
void Enviroment::initialize(){
    for(int i = 0;i<qtdSquares;i++){
        squares.push_back(Square(i));
    }
}

//add agent
void Enviroment::addAgent(Agent& agent){
    agents.push_back(agent);
    std::cout<<"Agent add\n";
}

void Enviroment::agentOnSquare(Agent& agent,Square& square){
    agent.setActualLocation(square);
}

std::vector<Square> Enviroment::getSquares(){
    return squares;
}

void Enviroment::addSquare(Square& square){
    squares.push_back(square);
}