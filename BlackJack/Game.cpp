#include"Game.h"

enum players { PLAYER_CHARACTER };

const int MAX_SIZE(5);

std::array<std::string, MAX_SIZE>names
{
	"Jason", "Amy", "Derek", "Ally", "John"
};

/////////////////////////////////////////////////////////////////////////// Private

void Game::startGame()
{
	for (int i = 0; i < 2; ++i)
	{
		for (auto& el : m_players)
			el.addCard(m_deck.getNextCard());
		m_dealler.addCard(m_deck.getNextCard());
	}
	m_dealler.hideSecond();
}

/////////////////////////////////////////////////////////////////////////// Public

Game::Game(const std::string& playerName, const int playersCount)
{
	for (int i = 0; i < playersCount + 1; ++i)
		if (i == PLAYER_CHARACTER)
			m_players.push_back(Player(playerName));
		else
			m_players.push_back(Player(names[i - 1]));

	startGame();
}

void Game::printTable()
{
	std::cout << m_dealler.getName() << ": " << m_dealler.showHand() << " Points: " << m_dealler.getPoints() << "\n\n\n";
	for (int i = 0; i < m_players.size(); ++i)
		std::cout << m_players[i].getName() << ": " << m_players[i].showHand() << " Points: " << m_players[i].getPoints() << "\n\n";
}
