#ifndef SQUARE_H

#define SQUARE_H
#include "Thing.h"

class Square : public Thing
{
private:
    int idSquare;
    bool isClean;

public:
    Square(int id);
    Square();

    bool getIsClean();
    void setIsClean(bool status);
    int getIdSquare();
};

#endif