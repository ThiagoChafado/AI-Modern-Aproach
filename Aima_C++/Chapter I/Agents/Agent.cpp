#include "Agent.h"
#include "Square.h"
#include <iostream>
#include "Thing.h"

Agent::Agent(){
}

Agent::~Agent() {}

bool Agent::canGrab(Thing &thing) /**/
{
    // Override for appropriate subclasses of Agent and Thing
    return false;
}

void Agent::setActualLocation(Square &square){
    actualLocation = square.getIdSquare();
}

int Agent::getActualLocation(){
    return actualLocation;
}