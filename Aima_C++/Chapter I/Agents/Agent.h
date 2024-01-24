#ifndef AGENT_H

#define AGENT_H

#include "Thing.h"
#include "Square.h"
#include <functional>
#include <iostream>
#include <vector>


class Agent : public Thing
{
public:
    Agent();
    ~Agent();

    bool canGrab(Thing &thing);
    void setActualLocation(Square &square);
    int getActualLocation();

private:
    bool bump;
    std::vector<Thing*> holding;
    int performance;
    int actualLocation;
};

#endif // AGENT_H
