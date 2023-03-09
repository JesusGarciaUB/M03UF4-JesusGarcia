#include "Game.h"
using namespace std;

string names[10] = { "Ramon", "Cajal", "Manuel", "Francisco", "Bernat", "Antonio", "Roberto", "Victor", "Bienvenido", "Sinforiano" };

Game::Game()
{
	numOfPlayers = 2 + rand() % (4 - 2 + 1);
	for (int x = 0; x < numOfPlayers; x++) {
		players[x] = Player(names[0 + rand() % (9 - 0 + 1)], x + 1);
	}

	vector<Card> temp;
	for (int x = 1; x < 13; x++) {
		for (int i = 0; i < 4; i++) {
			temp.push_back(Card(Type(i), x));
		}
	}

	for (int x = 0; x < 48; x++) {
		int random = 0 + rand() % ((temp.size() - 1) - 0 + 1);
		deck->push(temp.at(random));
		temp.erase(temp.begin() + random);
		cout << deck->top().GetTypeString() << "(" << deck->top().GetValue() << ") " << endl;
	}

	for (int x = 0; x < 7; x++) {
		for (int i = 0; i < numOfPlayers; i++) {
			players[i].InsertCard(deck->top());
			deck->pop();
		}
	}
	
	for (Player& p : players) {
		p.PrintHand();
	}
	
}

Card Game::GetNewCard()
{
	Card _return = deck->top();
	deck->pop();
	return _return;
}

void Game::DiscardCard(Card c)
{
	discarded.push(c);
}

void Game::PrintDiscarded()
{
	//cout << discarded.top().GetTypeString() << "(" << discarded.top().GetValue() << ")";
	stack<Card> temp = discarded;
	while (temp.size() > 0) {
		cout << temp.top().GetTypeString() << "(" << temp.top().GetValue() << ") ";
		temp.pop();
	}
}
