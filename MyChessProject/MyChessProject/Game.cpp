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
    Piece sourcePiece = move.getStart().getPiece();
    if (sourcePiece == null) {
        return false;
    }

    // valid player 
    if (player != currentTurn) {
        return false;
    }

    if (sourcePiece.isWhite() != player.isWhiteSide()) {
        return false;
    }

    // valid move? 
    if (!sourcePiece.canMove(board, move.getStart(),
        move.getEnd())) {
        return false;
    }

    // kill? 
    Piece destPiece = move.getStart().getPiece();
    if (destPiece != null) {
        destPiece.setKilled(true);
        move.setPieceKilled(destPiece);
    }

    // castling? 
    if (sourcePiece != null && sourcePiece instanceof King
        && sourcePiece.isCastlingMove()) {
        move.setCastlingMove(true);
    }

    // store the move 
    movesPlayed.add(move);

    // move piece from the stat box to end box 
    move.getEnd().setPiece(move.getStart().getPiece());
    move.getStart.setPiece(null);

    if (destPiece != null && destPiece instanceof King) {
        if (player.isWhiteSide()) {
            this.setStatus(GameStatus.WHITE_WIN);
        }
        else {
            this.setStatus(GameStatus.BLACK_WIN);
        }
    }

    // set the current turn to the other player 
    if (this.currentTurn == players[0]) {
        this.currentTurn = players[1];
    }
    else {
        this.currentTurn = players[0];
    }

    return true;
}


