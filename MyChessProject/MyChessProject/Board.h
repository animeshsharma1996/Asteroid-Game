#pragma once
#include "Block.h"
#include <vector>

class Board
{
public :
     Board();
     Block GetBlock(int x, int y);
     std::vector<std::vector<Block>> blocks;
     void ResetBoard(); 
};

