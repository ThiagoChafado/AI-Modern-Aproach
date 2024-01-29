#if !defined(PROBLEM_H)
#define PROBLEM_H

#include "vector"

class Problem
{
private:
    std::vector<std::vector<int>> initialState;
public:
    Problem(/* args */);
    ~Problem();

    std::vector<std::vector<int>> getInitialState;
};




#endif // PROBLEM_H
