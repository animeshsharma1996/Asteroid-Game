#pragma once
#include "Block.h"
#include "Board.h"

class Piece
{
public :
	Piece(bool white);

	bool IsWhite();
	void SetWhite(bool white);
	bool IsKilled();
	void SetKilled(bool killed);

	virtual bool CanMove(Board board, Block start, Block end);

protected :
	bool isKilled;
	bool isWhite;
};

