#include "Thing.h"

Thing::Thing() : alive(true) {}

Thing::~Thing() {}

std::string Thing::repr()
{
    return "<" + (name.empty() ? "Thing" : name) + ">";
}

bool Thing::is_alive()
{
    return alive;
}

void Thing::show_state()
{
    std::cout << "I don't know how to show_state." << std::endl;
}

void Thing::display(std::string &canvas, int x, int y, int width, int height)
{
    // Do we need this?
}
