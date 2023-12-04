#pragma once
#include<vector>
#include<array>

#include"Deck.h"
#include"Player.h"
#include"Dealler.h"

class Game
{
	Deck m_deck;
	std::vector<GenericPlayer*>m_players;

	void startGame();

public:
	Game(const std::string& playerName, const int playersCount);
	void printTable();
};