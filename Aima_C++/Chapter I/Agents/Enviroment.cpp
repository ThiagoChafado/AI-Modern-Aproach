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
        squares.push_back(Square());
    }
}

//add agent
void Enviroment::addAgent(Agent& agent){
    agents.push_back(agent);
    std::cout<<"Agent add\n";
}
