#include"Dealler.h"

//////////////////////////////////////////////// Public
Dealler::Dealler(const std::string& name)
	:GenericPlayer(name) {}

bool Dealler::isHitting()
{
	return false;
}

void Dealler::hideSecond()
{
	m_hand.turnCard(1);
}

void Dealler::showSecond()
{
	m_hand.turnCard(1);
}
