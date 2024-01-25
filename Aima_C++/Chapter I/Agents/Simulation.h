#ifndef SIMULATION_H

#define SIMULATION_H
#include "Enviroment.h"
#include "Agent.h"
#include "Square.h"
#include "Thing.h"

class Simulation
{
private:
    bool flagEnd;
public:
    Simulation();
    bool getFlagEnd(Enviroment& enviroment,std::vector<Square> &actualSquares);
    void simpleReflexAgent(Simulation& simulation);
};




#endif