#include"Deck.h"

/////////////////////////////////////////////////// Private

void Deck::init()
{
	for (int i = Suit::HEARTS; i <= Suit::SPIDERS; ++i)
		for (int j = Rank::TWO; j <= Rank::ACE; ++j)
			m_deck.push_back(Card(static_cast<Rank>(j), static_cast<Suit>(i)));
}

void Deck::shuffle() { std::random_shuffle(m_deck.begin(), m_deck.end()); }

/////////////////////////////////////////////////// Public
const int Deck::SIZE = 52;

Deck::Deck()
	:m_currentCard(0) 
{ 
	init();
	shuffle();
}

Card* Deck::getNextCard()
{
	if (m_currentCard < SIZE)
	{
		return &m_deck[m_currentCard++];
	}
}
