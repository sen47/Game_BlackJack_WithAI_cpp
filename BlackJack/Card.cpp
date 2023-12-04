#include"Card.h"

/////////////////////////////////////////////////////////// Private
void Card::idintificateCard()
{
	switch (m_rank)
	{
	case TWO:
		m_name += "2";
		m_value = 2;
		break;
	case THREE:
		m_name += "3";
		m_value = 3;
		break;
	case FOUR:
		m_name += "4";
		m_value = 4;
		break;
	case FIVE:
		m_name += "5";
		m_value = 5;
		break;
	case SIX:
		m_name += "6";
		m_value = 6;
		break;
	case SEVEN:
		m_name += "7";
		m_value = 7;
		break;
	case EIGHT:
		m_name += "8";
		m_value = 8;
		break;
	case NINE:
		m_name += "9";
		m_value = 9;
		break;
	case TEN:
		m_name += "10";
		m_value = 10;
		break;
	case JACK:
		m_name += "J";
		m_value = 10;
		break;
	case QUINE:
		m_name += "Q";
		m_value = 10;
		break;
	case KING:
		m_name += "K";
		m_value = 10;
		break;
	case ACE:
		m_name += "A";
		m_value = 1;
		break;
	};

	switch (m_suit)
	{
	case HEARTS:
		m_name += static_cast<char>(HEARTS);
		break;
	case DIAMONDS:
		m_name += static_cast<char>(DIAMONDS);
		break;
	case CLUBS:
		m_name += static_cast<char>(CLUBS);
		break;
	case SPIDERS:
		m_name += static_cast<char>(SPIDERS);
		break;
	};
}

/////////////////////////////////////////////////////////// Public
////////////////////////////////////////////////// Ctor

Card::Card(const Rank rank, const Suit suit)
	:m_rank(rank), m_suit(suit), m_isFaceUp(true)
{
	idintificateCard();
}
//////////////////////////////////////////////////////// Func
////////////////////////////////////////////////// Const

const std::string& Card::getStringName()const
{
	if (m_isFaceUp)
		return m_name;
	else
		return "!hide!";
}

int Card::getValue() const { return m_value; }

bool Card::isFaceUp() const { return m_isFaceUp; }

//////////////////////////////////////////////////// Non const

void Card::flip() { m_isFaceUp = !(m_isFaceUp); }
