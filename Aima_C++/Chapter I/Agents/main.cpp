#include "Agent.h"
#include "Enviroment.h"
#include "Square.h"
#include <iostream>

int main() {

    Agent agent;
    std::cout << "Agent's representation: " << agent.repr() << std::endl;
    std::cout << "Is the agent alive? " << (agent.isAlive() ? "Yes" : "No") << std::endl;
    agent.showState();

    Enviroment enviroment(2);
    std::cout << "Enviroment with " << enviroment.getQtdSquares() <<" Squares\n";
    enviroment.addAgent(agent);
    
    std::vector<Square> actualSquares = enviroment.getSquares();
    for(int i=0;i<enviroment.getQtdSquares();i++){
        std::cout << "Square id:" << actualSquares[i].getIdSquare()<<std::endl;
        std::cout << "Is clean?: "<< (actualSquares[i].getIsClean() ? "Yes" : "No")<<std::endl;
    }
    
    return 0;
}