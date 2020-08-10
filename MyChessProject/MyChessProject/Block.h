#pragma once
#include "Piece.h"

class Block
{

public :
	Block(int x, int y, Piece piece);

	Piece GetPiece();
	void SetPiece(Piece piece);
	void SetX(int x);
	int GetX();
	void SetY(int x);
	int GetY();

private :
	Piece piece;
	int X;
	int Y;
};

