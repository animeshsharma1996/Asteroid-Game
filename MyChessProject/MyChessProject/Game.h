#pragma once
#include "Move.h"
#include <vector>
#include "Player.h"
#include "Board.h"
#include <list>

class Game
{
	enum GameStatus
	{
		RUNNING,
		WHITE_WINS,
		BLACK_WINS,
		STALEMATE,
		QUIT

	};

	bool HasEnded();
	bool GetStatus();
	void SetStatus(GameStatus gameStatus);
	bool PlayerMove(Player player, int startX, int startY, int endX, int endY);
	bool MakeMove(Move move, Player player);

private:
	std::vector<Player> player;
	Board board;
	Player currentTurn;
	GameStatus gameStatus;
	std::list<Move> movePlayed;

	void Inititalise(Player p1, Player p2);

};



