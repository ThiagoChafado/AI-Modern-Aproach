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
    void agentOnSquare(Agent& agent,Square& square);
    std::vector<Square> getSquares();
    void addSquare(Square& square);
};

#endif