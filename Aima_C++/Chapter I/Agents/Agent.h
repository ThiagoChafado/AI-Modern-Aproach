#ifndef AGENT_H

#define AGENT_H

#include "Thing.h"
#include <functional>
#include <iostream>
#include <vector>

class Agent : public Thing
{
public:
    using Program = std::function<std::string(std::string &)>;

    Agent(Program program = nullptr);
    ~Agent();

    bool canGrab(Thing &thing);
    std::string getProgramOutput(std::string &percept);
    void setProgram(Program program);
    void setActualLocation();
    void getActualLocation();

private:
    bool bump;
    std::vector<Thing*> holding;
    int performance;
    Program program;
    int actualLocation;
};

#endif // AGENT_H
