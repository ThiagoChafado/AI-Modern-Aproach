#include "Thing.h"

Thing::Thing() : alive(true) {}

Thing::~Thing() {}

std::string Thing::repr()
{
    return "<" + (name.empty() ? "Thing" : name) + ">";
}

bool Thing::isAlive()
{
    return alive;
}

void Thing::showState()
{
    std::cout << "I don't know how to show_state." << std::endl;
}

