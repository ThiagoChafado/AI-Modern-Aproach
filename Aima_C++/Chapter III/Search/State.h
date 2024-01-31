#if !defined(STATE_H)
#define STATE_H
#include "vector"
#include "random"
#include "algorithm"
#include "iostream"

class State
{
private:
    std::vector<std::vector<int>> board;

public:
    State(std::vector<std::vector<int>>);
    std::vector<std::vector<int>> getBoard();
    void generateRandomInitialState();
    void printState();
};

#endif // STATE_H
