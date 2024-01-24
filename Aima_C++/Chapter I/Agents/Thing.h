#ifndef THING_H

#define THING_H

#include <iostream>

class Thing
{
public:
    Thing();
    ~Thing();
    // Default constructor and desctructor

    std::string repr();
    bool is_alive();
    void show_state();
    void display(std::string &canvas, int x, int y, int width, int height);

protected:
    bool alive;
    std::string name;
};

#endif // THING_H
