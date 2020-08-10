#include "Piece.h"

	Piece::Piece(bool white)
    {
        this->isWhite = white;
    }

	bool Piece::IsWhite()
    {
          return isWhite;
    }

	void Piece::SetWhite(bool white)
    {
          this->isWhite = white;
    }

	bool Piece::IsKilled()
    {
          return isKilled;
    }

	void Piece::SetKilled(bool killed)
    {
          this->isKilled = killed;
    }

	//bool Piece::CanMove(Board board, Block start, Block end);