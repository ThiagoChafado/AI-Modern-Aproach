#include "Agent.h"
#include "Square.h"
#include <iostream>
#include "Thing.h"

Agent::Agent()
{
    
}

Agent::~Agent() {}

bool Agent::canGrab(Thing &thing) /**/
{
    return false;
}

void Agent::setActualLocation(Square &square)
{
    actualLocation = square;
}

Square Agent::getActualLocation()
{
    return actualLocation;
}

int Agent::action(Square &square, Agent &agent)
//1=Clean
//2=Right
//3=Left
//4=Nop
{
    if (!square.getIsClean())
    {
        return 1;
    }
    if (square.getIsClean())
    {
        if (agent.getActualLocation().getIdSquare() == 0)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
    return 4;
}
