#ifndef ENVIROMENT_H
//Vaccum enviroment
#include "Square.h"
#include "vector"
#include "Agent.h"
#define ENVIROMENT_H

class Enviroment
{
private:
    int qtdSquares;
    std::vector<Square> squares;
    std::vector<Agent> agents;

public:
    Enviroment(int qtdSquares);
    ~Enviroment();

    int getQtdSquares();
    void setQtdSquares(int qtd);
    void initialize();
    void addAgent(Agent& agent);
};

#endif