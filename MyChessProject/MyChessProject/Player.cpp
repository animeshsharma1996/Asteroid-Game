#include "Player.h"

bool Player::IsWhiteSide()
{
    return this->whiteSide == true;
}

bool Player::IsHumanPlayer()
{
    return this->humanPlayer == true;
}
