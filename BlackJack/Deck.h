#pragma once
#include<vector>
#include<algorithm>
#include<iostream>

#include"Card.h"

class Deck
{
	const static int SIZE;
	std::vector<Card>m_deck;
	int m_currentCard;

	void init();
	void shuffle();
public:
	Deck();

	Card* getNextCard();
};