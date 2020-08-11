#include "Queen.h"

Queen::Queen(bool white)
{
	this->isWhite = white;
}

bool Queen::CanMove(Board board, Block start, Block end)
{
    // we can't move the piece to a Spot that  
   // has a piece of the same color 
    if (end.GetPiece().IsWhite() == this->IsWhite())
        return false;

    int deltaX = abs(start.GetX() - end.GetX());
    int deltaY = abs(start.GetY() - end.GetY());

    if (deltaX == 0 || deltaY == 0 || deltaX == deltaY)
        return true;

    return true;
}
