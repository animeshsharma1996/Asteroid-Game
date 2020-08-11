#include "Game.h"

void Game::Inititalise(Player p1, Player p2)
{
	player[0] = p1;
	player[1] = p2;

	board.ResetBoard();

	if (p1.IsWhiteSide())
	{
		this->currentTurn = p1;
	}
	else
	{
		this->currentTurn = p2;
	}
	movePlayed.clear();
}

bool Game::HasEnded()
{
	return this->gameStatus != RUNNING;
}

bool Game::GetStatus()
{
	return this->gameStatus
}

void Game::SetStatus(GameStatus gameStatus)
{
	this->gameStatus = gameStatus;
}

bool Game::PlayerMove(Player player, int startX, int startY, int endX, int endY)
{
	Block start = board.GetBlock(startX, startY);
	Block end = board.GetBlock(startX, startY);
	Move *move = new Move(player, start, end);  
	return this->MakeMove(*move, player);
}

bool Game::MakeMove(Move move, Player player)
{
	// valid player 

	// valid move? 

	// kill? 

	// castling? 

	// store the move 

	// move piece from the stat box to end box 

	// set the current turn to the other player 
	return false;
}

