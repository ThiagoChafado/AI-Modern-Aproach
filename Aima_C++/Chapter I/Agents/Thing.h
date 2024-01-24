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
    bool isAlive();
    void showState();

protected:
    bool alive;
    std::string name;
};

#endif // THING_H
