#include"Player.h"

/////////////////////////////////////////////// Public
Player::Player(const std::string& name)
	:GenericPlayer(name) {}

bool Player::isHitting()
{
	return false;
}
