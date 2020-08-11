#include "Board.h"

Board::Board()
{
   this->ResetBoard(); 
}

Block Board::GetBlock(int x, int y)
{
       if(x < 0 || x > 7 || y < 0 || y > 7)
       throw new _exception;

       return blocks[x][y];
}

void Board::ResetBoard()
{
    // initialize white pieces 
    blocks[0][0] = new Block(0,0, new Piece(true));
    blocks[1][0] = new Block(0,0, new Piece(true));
    blocks[2][0] = new Block(0,0, new Piece(true));
    blocks[3][0] = new Block(0,0, new Piece(true));
    blocks[4][0] = new Block(0,0, new Piece(true));
    blocks[5][0] = new Block(0,0, new Piece(true));
    blocks[6][0] = new Block(0,0, new Piece(true));
    blocks[7][0] = new Block(0,0, new Piece(true));

    blocks[0][1] = new Block(0,0, new Piece(true));
    blocks[1][1] = new Block(0,0, new Piece(true));
    blocks[2][1] = new Block(0,0, new Piece(true));
    blocks[3][1] = new Block(0,0, new Piece(true));
    blocks[4][1] = new Block(0,0, new Piece(true));
    blocks[5][1] = new Block(0,0, new Piece(true));
    blocks[6][1] = new Block(0,0, new Piece(true));
    blocks[7][1] = new Block(0,0, new Piece(true));

    // initialize black pieces 
    blocks[0][6] = new Block(0,0, new Piece(false));
    blocks[1][6] = new Block(0,0, new Piece(false));
    blocks[2][6] = new Block(0,0, new Piece(false));
    blocks[3][6] = new Block(0,0, new Piece(false));
    blocks[4][6] = new Block(0,0, new Piece(false));
    blocks[5][6] = new Block(0,0, new Piece(false));
    blocks[6][6] = new Block(0,0, new Piece(false));
    blocks[7][6] = new Block(0,0, new Piece(false));
    
    blocks[0][7] = new Block(0,0, new Piece(false));
    blocks[1][7] = new Block(0,0, new Piece(false));
    blocks[2][7] = new Block(0,0, new Piece(false));
    blocks[3][7] = new Block(0,0, new Piece(false));
    blocks[4][7] = new Block(0,0, new Piece(false));
    blocks[5][7] = new Block(0,0, new Piece(false));
    blocks[6][7] = new Block(0,0, new Piece(false));
    blocks[7][7] = new Block(0,0, new Piece(false));

    // initialize remaining boxes without any piece 
    for (int i = 0; i < 8; i++)
    {
        for (int j = 2; j < 6; j++)
        {
            boxes[i][j] = new Block(i, j, null);
        }
    }



}



