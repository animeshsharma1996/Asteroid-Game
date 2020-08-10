#include "King.h"
#include "Math.h"

King::King(bool white)
{
    
}

bool King::IsCastling()
{
     return isCastling;
}

void King::SetCastling(bool _isCastling)
{
     isCastling = _isCastling;
}

bool King::CanMove(Board board, Block start, Block end)
{

    // we can't move the piece to a Spot that  
    // has a piece of the same color 
    if(end.GetPiece().IsWhite() == this->IsWhite())
    return false;
    
    int x = abs(start.GetX() - end.GetX());
    int y = abs(start.GetY() - end.GetY());

    if(x + y == 1 )

    // check if this move will not result in the king 
    // being attacked if so return true 
}

bool King::IsValidCastling(Board board, Block start, Block end)
{
     if (this->isCastling) 
       return false; 
    // Logic for returning true or false 

}

bool King::IsCastlingMove(Block start, Block end)
{
    // check if the starting and  
    // ending position are correct 
}


