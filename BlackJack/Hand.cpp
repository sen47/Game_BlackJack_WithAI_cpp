#include"Hand.h"

///////////////////////////////////////////////////// Public

void Hand::addCard(Card* pCard) { m_pCards.push_back(pCard); }

void Hand::clear() { m_pCards.clear(); }

int Hand::getTotal()
{
	int sum(0);
	for (auto& el : m_pCards)
		if (el->isFaceUp())
			sum += el->getValue();
	return sum;
}

void Hand::turnCard(const int index)
{
	m_pCards.at(index)->flip();
}

std::string Hand::showHand()
{
	std::string temp;
	for (const auto& el : m_pCards)
		temp += el->getStringName() + " ";
	return temp;
}
