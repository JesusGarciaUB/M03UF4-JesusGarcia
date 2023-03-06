#pragma once
#include "Card.h"
#include <vector>
#include <list>

using namespace std;

class Player
{
private:
	int id;
	string name;
	vector<Card> hand;
public:
	void InsertCard(Card c);
	Card GetCard();
	Card GetCard(Type t);
	void PrintHand();
	Player(string n, int i);
	Player();
};