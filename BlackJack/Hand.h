#pragma once
#include<vector>

#include"Card.h"

class Hand
{
	std::vector<Card*> m_pCards;

public:
	void addCard(Card* pCard);
	void clear();
	int getTotal();
	void turnCard(const int index);
	std::string showHand();
};
