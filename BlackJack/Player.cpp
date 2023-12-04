#include"Player.h"

/////////////////////////////////////////////// Public
Player::Player(const std::string& name)
	:GenericPlayer(name) {}

bool Player::isHitting()
{
	char answer;
	do
	{
		std::cout << "Take one more card?(y/n): ";
		std::cin >> answer;
		if (answer != 'y' && answer != 'n')
			std::cout << "Wrong answer, try again!" << std::endl;
	} while (answer != 'y' && answer != 'n');
	return answer;
}
