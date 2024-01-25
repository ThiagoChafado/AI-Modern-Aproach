#include "Enviroment.h"
#include "Agent.h"
#include "Square.h"
#include "Thing.h"
#include "Simulation.h"
#include <iostream>

Simulation::Simulation()
{
    std::cout << "Simulation created\n";
}

void Simulation::simpleReflexAgent(Simulation &simulation)
{
    Enviroment enviroment(2);
    std::cout << "Enviroment with " << enviroment.getQtdSquares() << " Squares\n";
    Agent agent;
    std::cout << "Agent's representation: " << agent.repr() << std::endl;
    std::cout << "Is the agent alive? " << (agent.isAlive() ? "Yes" : "No") << std::endl;
    agent.showState();
    std::vector<Square> actualSquares = enviroment.getSquares();
    enviroment.addAgent(agent);
    while (!simulation.getFlagEnd(enviroment, actualSquares))
    {
        int action = agent.action(actualSquares[agent.getActualLocation().getIdSquare()], agent);
        switch (action)
        {
        case 1:
            actualSquares[agent.getActualLocation().getIdSquare()].setIsClean(true);
            std::cout<<"Agent cleaned square"<<agent.getActualLocation().getIdSquare()<<std::endl;
            break;
        case 2:
            agent.setActualLocation(actualSquares[1]);
            std::cout<<"Moving right\n";
            break;
        case 3:
            agent.setActualLocation(actualSquares[0]);
            std::cout<<"Moving left\n";
        default:
            break;
        }
        
    }
    std::cout << "Stopped\n";
}
bool Simulation::getFlagEnd(Enviroment &enviroment, std::vector<Square> &actualSquares)
{
    int count = 0;
    for (int i = 0; i < enviroment.getQtdSquares(); i++)
    {
        if (actualSquares[i].getIsClean())
        {
            count++;
        }
    }
    return (count == enviroment.getQtdSquares());
}
