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

    bool can_grab(Thing &thing);
    std::string get_program_output(std::string &percept);
    void set_program(Program program);

private:
    bool bump;
    std::vector<Thing*> holding;
    int performance;
    Program program;
};

#endif // AGENT_H
