#include "Block.h"
#include "Piece.h"

//Representing a cell in the chess board

	Block::Block(int x, int y, Piece p)
	{
		SetX(x) ;
		SetY(y) ;
		SetPiece(p);
	}

    Piece Block::GetPiece()
	{
		return piece;
	}

	void Block::SetPiece(Piece p)
	{
         this->piece = p;
	}

	void Block::SetX(int x)
	{
        this->X = x;
	}

	int Block::GetX()
	{
        return X;
	}
	
	void Block::SetY(int y)
	{
        this->Y = y;
	}

	int Block::GetY()
	{
        return Y;
	}