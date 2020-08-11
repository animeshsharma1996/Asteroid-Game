#include "Move.h"

Move::Move(Player player, Block start, Block end)
{
	this->player = player;
	this->start = start;
	this->end = end;
	this->pieceMoved = start.GetPiece();
}

bool Move::IsCastlingMove()
{
	return this->castlingMove == true;
}

bool Move::SetCastlingMove(bool castlingMove)
{
	this->castlingMove = castlingMove;
}


