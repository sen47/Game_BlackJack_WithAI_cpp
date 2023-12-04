#pragma once
#include<string>

enum Rank { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUINE, KING, ACE };
enum Suit { HEARTS = 3, DIAMONDS, CLUBS, SPIDERS };

class Card
{
	Rank m_rank;
	Suit m_suit;
	int m_value;
	std::string m_name;
	bool m_isFaceUp;

	void idintificateCard();

public:
	Card(const Rank rank, const Suit suit);

	const std::string& getStringName()const;
	int getValue()const;
	bool isFaceUp()const;
	
	void flip();
};