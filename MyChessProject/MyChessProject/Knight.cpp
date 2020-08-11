#include "Knight.h"

Knight::Knight(bool white)
{
    this->isWhite = white;
}

bool Knight::CanMove(Board board, Block start, Block end)
{
    // we can't move the piece to a Spot that  
    // has a piece of the same color 
    if (end.GetPiece().IsWhite() == this->IsWhite())
        return false;

    int deltaX = abs(start.GetX() - end.GetX());
    int deltaY = abs(start.GetY() - end.GetY());

    return deltaX * deltaY == 2;
}