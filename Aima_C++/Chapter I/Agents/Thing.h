#ifndef THING_H

#define THING_H
#include <vector>

class Thing
{
private:
    bool isAlive;
    bool bump;
    std::vector<Thing> holding;
    int perfomance;

public:
    Thing(/* args */);
    ~Thing();
};

Thing::Thing(/* args */)
{

}

Thing::~Thing()
{
}

#endif /*THING_H*/