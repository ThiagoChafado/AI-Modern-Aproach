#if !defined(PROBLEM_H)
#define PROBLEM_H

#include "vector"
#include "State.h"
#include "Node.h"
#include "string"

class Problem 
{
private:
    State& state;
    std::vector<std::string> actions;
public:
    Problem(/* args */);
    ~Problem();

    std::vector<std::vector<int>> getResult(State &state,std::string action);
    State getState();
    bool goalTest(Node &node);
    std::vector<std::string> getActions(State &state);
    void getInitialState();

};




#endif // PROBLEM_H
