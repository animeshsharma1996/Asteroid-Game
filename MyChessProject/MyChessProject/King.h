#pragma once
#include "Piece.h"
#include "Block.h"
#include "Board.h"

class King : public Piece
{
public :
   King(bool white);
   bool HasCastled();
   void SetCastling(bool isCastling);
   bool CanMove(Board board, Block start, Block end);
private :
   bool isCastling = false;
   bool IsValidCastling(Board board, Block start, Block end);
   bool IsCastlingMove(Block start, Block end);
};

