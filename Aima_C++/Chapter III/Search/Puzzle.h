#if !defined(PUZZLE_H)

#define PUZZLE_H

#include "vector"
#include "random"
#include "algorithm"
#include "iostream"

class Puzzle
{
private:
    std::vector<std::vector<int>> board;

public:

    
    std::vector<std::vector<int>> getBoard();
    void generateRandomInitialState();
    void printState();
};


#endif // PUZZLE_H
