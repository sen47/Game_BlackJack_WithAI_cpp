#include<iostream>
#include<ctime>
#include<string>
#include<Windows.h>

#include"Game.h"

#define	DEBUG

#define CLS system("cls")

int askQuestion(std::string question, const int min, const int max);

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	std::string namePlayer;

#ifndef DEBUG
	std::cout << "Enter your name: ";
	std::cin >> namePlayer;
#endif // !DEBUG

#ifdef DEBUG
	namePlayer = "Aleksandr";
#endif // DEBUG
	CLS;

#ifndef DEBUG
	int countPlayers(askQuestion("How many players in game(not counting you and dealler, from 1 to 5)", 1, 5));
#endif // !DEBUG

#ifdef DEBUG
	int countPlayers(5);
#endif // DEBUG
	CLS;

	Game game(namePlayer, countPlayers);
	game.printTable();

	return 0;
}

int askQuestion(std::string question, const int min, const int max)
{
	int answer;
	do
	{
		std::cout << question << "\nEnter answer: ";
		std::cin >> answer;
		system("cls");
		if (answer<min || answer>max)
			std::cout << "Wrong answer, try again!" << std::endl;
	} while (answer<min || answer>max);

	return answer;
}
