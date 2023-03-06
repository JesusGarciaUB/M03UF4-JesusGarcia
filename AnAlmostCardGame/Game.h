#pragma once
#include "Player.h"
#include <stack>
using namespace std;

class Game
{
private:
	Player players[4];
	int numOfPlayers;
	stack<Card> deck[48];
	stack<Card> discarded;
public:
	Game();
	Card GetNewCard();
	void DiscardCard(Card c);
	void PrintDiscarded();
};