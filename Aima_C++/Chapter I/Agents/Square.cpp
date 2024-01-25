#include "Square.h"

Square::Square(){
    idSquare = 0;
    isClean = false;
}
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