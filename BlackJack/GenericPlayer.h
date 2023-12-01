#pragma once
#include<string>

#include"Hand.h"
#include"Card.h"

class GenericPlayer
{
	std::string m_name;

protected:
	Hand m_hand;

public:
	GenericPlayer(const std::string& name);

	virtual bool isHitting() = NULL;

	const std::string& getName();
	virtual void addCard(Card* pCard);
	std::string showHand();
	int getPoints();
};