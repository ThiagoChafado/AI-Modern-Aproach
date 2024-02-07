#ifndef PROBLEM_H
#define PROBLEM_H

#include "State.h"
#include <vector>
#include <string>


class Node;

class Problem 
{
private:
    State &state;
    std::vector<std::string> actions;
public:
    Problem(State &state);
   
    State getResult(State &state,std::string action);
    State getState();
    bool goalTest(Node &node); 
    std::vector<std::string> getActions(State &state);
    State getInitialState();

};

#endif // PROBLEM_H
