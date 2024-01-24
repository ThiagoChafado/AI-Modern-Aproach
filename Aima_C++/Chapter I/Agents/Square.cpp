#include "Square.h"
Square::Square(int id)
{
    idSquare = id;
    isClean = false;
}

bool Square::getIsClean()
{
    return isClean;
}
void Square::setIsClean(bool status)
{
    isClean = status;
}
int Square::getIdSquare()
{
    return idSquare;
}