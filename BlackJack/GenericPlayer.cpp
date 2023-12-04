#include"GenericPlayer.h"

//////////////////////////////////////////////// Public

GenericPlayer::GenericPlayer(const std::string& name)
	:m_name(name) {}

const std::string& GenericPlayer::getName() { return m_name; }

void GenericPlayer::addCard(Card* pCard)
{
	m_hand.addCard(pCard);
}

std::string GenericPlayer::showHand() { return m_hand.showHand(); }

int GenericPlayer::getPoints()
{
	return m_hand.getTotal();
}

void GenericPlayer::hideSecond() {}
void GenericPlayer::showSecond() {}