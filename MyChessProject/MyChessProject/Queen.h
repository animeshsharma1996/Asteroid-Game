#pragma once
#include "Piece.h"
#include "Block.h"
#include "Board.h"

class Queen : public Piece
{
public:
	Queen(bool white);
	bool CanMove(Board board, Block start, Block end);
};

