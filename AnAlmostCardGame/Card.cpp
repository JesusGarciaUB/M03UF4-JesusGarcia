#include "Card.h"
#include <stdlib.h>

string Card::GetTypeString()
{
	switch (type) {
	case SPADES: return "Spades"; break;
	case COINS: return "Coins"; break;
	case CUPS: return "Cups"; break;
	case CLUBS: return "Clubs"; break;
	}
}

Card::Card()
{
	value = -1;
	type = Type(0);
}

Card::Card(Type t, int v) {
	value = v;
	type = t;
}

bool Card::operator==(const Card& card) {
	return type == card.type && value == card.value;
}
