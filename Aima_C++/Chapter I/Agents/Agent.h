#ifndef AGENT_H

#define AGENT_H

#include "Thing.h"
#include "Square.h"
#include <functional>
#include <iostream>
#include <vector>
#include <string.h>


class Agent : public Thing
{
public:
    Agent();
    ~Agent();

    bool canGrab(Thing &thing);
    void setActualLocation(Square &square);
    Square getActualLocation();
    int action(Square &square,Agent &agent);

private:
    bool bump;
    std::vector<Thing*> holding;
    int performance;
    Square actualLocation;
};

#endif // AGENT_H
