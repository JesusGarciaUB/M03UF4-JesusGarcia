#pragma once
#include <iostream>

using namespace std;

enum Type {SPADES, COINS, CUPS, CLUBS};

class Card
{
private:
	Type type;
	int value;
public:
	Type GetType() { return type; }
	string GetTypeString();
	int GetValue() { return value; }
	Card();
	Card(Type t, int v);
	bool operator == (const Card& card);
};

