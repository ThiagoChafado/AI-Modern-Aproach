#include "Agent.h"
#include <iostream>
#include "Thing.h"

Agent::Agent(Program program)
    : bump(false), performance(0), program(program) {
    if (!program) {
    std::cout << "Can't find a valid program for " << repr() << ", falling back to default." << std::endl;
}

}

Agent::~Agent() {}

bool Agent::can_grab( Thing& thing) /**/ {
    // Override for appropriate subclasses of Agent and Thing
    return false;
}

std::string Agent::get_program_output( std::string& percept) /**/ {
    return program ? program(percept) : "";
}

void Agent::set_program(Program program) {
    this->program = program;
}
