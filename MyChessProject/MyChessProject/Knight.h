#pragma once
#include "Piece.h"

class Knight : public Piece
{
public:
	Knight(bool white);
	bool CanMove(Board board, Block start, Block end);
};

