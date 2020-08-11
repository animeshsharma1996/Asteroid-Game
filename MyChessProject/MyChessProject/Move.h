#pragma once
#include "Block.h"
#include "Player.h"

class Move
{
public :
	Move(Player player, Block start, Block end);
	bool IsCastlingMove();
	bool SetCastlingMove(bool castlingMove);
private :
	Player player;
	Block start;
	Block end;
	Piece pieceMoved;
	Piece pieceKilled;
	bool castlingMove = false;
};

