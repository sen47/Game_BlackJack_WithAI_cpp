#include"Game.h"

enum players { DEALLER, PLAYER_CHARACTER, FIRST_AI_PLAYER };

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
			el->addCard(m_deck.getNextCard());
	}
	m_players[DEALLER]->hideSecond();
}

/////////////////////////////////////////////////////////////////////////// Public

Game::Game(const std::string& playerName, const int playersCount)
{
	for (int i = 0; i < playersCount + 2; ++i)
		if (i == PLAYER_CHARACTER)
			m_players.push_back(new Player(playerName));
		else if (i == DEALLER)
			m_players.push_back(new Dealler);
		else
			m_players.push_back(new Player(names[i - 1]));

	startGame();
}

void Game::printTable()
{
	for (int i = 0; i < m_players.size(); ++i)
	{
		std::cout << m_players[i]->getName() << ": " << m_players[i]->showHand() << " Points: " << m_players[i]->getPoints() << "\n\n";
		std::cout << (i == DEALLER ? "\n\n\n" : "\n\n");
	}
}
