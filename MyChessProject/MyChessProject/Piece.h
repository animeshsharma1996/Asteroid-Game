#pragma once
class Piece
{
public :
	Piece(bool white);

	bool IsWhite();
	void SetWhite(bool white);
	bool IsKilled();
	void SetKilled(bool killed);

	virtual bool CanMove(Board board, Block start, Block end);

private :
	bool isKilled;
	bool isWhite;
};

