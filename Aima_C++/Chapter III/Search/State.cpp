#include "State.h"

std::vector<std::vector<int>> State::getBoard(){
    return board;
}

void State::generateRandomInitialState()
{
    std::vector<int> puzzlePieces = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(puzzlePieces.begin(), puzzlePieces.end(), g);
    board.resize(3, std::vector<int>(3));
    auto it = puzzlePieces.begin();
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            board[i][j] = *it++;
        }
    }
}

void State::printState() 
{

    for (auto &row : board)
    {
        for (int value : row)
        {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}