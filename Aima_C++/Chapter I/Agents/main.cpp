#include "Agent.h"
#include "Enviroment.h"
#include <iostream>

int main() {
    Agent::Program simpleProgram = [](const std::string& percept) -> std::string {
        std::cout << "Agent perceives: " << percept << std::endl;
        return "Do something";  
    };

    Agent agent(simpleProgram);
    std::cout << "Agent's representation: " << agent.repr() << std::endl;
    std::cout << "Is the agent alive? " << (agent.isAlive() ? "Yes" : "No") << std::endl;
    agent.showState();

    Enviroment enviroment(2);
    std::cout << "Enviroment with " << enviroment.getQtdSquares() <<" Squares\n";
    enviroment.addAgent(agent);
    
    return 0;
}