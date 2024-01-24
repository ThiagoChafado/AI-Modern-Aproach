#include "Square.h"
Square::~Square(){}
Square::Square(){
    int idSquare;
    isClean = false;
}

bool Square::getIsClean(){
    return isClean;
}
void Square::setIsClean(bool status){
    isClean = status;
}