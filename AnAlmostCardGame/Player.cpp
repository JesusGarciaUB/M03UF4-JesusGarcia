#include "Player.h"

void Player::InsertCard(Card c)
{
	bool inserted = true;
	if (hand.size() != 0) {
		bool typeReached = false;
		inserted = false;
		vector<Card>::iterator it = hand.begin();
		int pos = 0;
		for (Card& cards : hand) {
			if (cards.GetType() == c.GetType()) {
				typeReached = true;
				if (cards.GetValue() <= c.GetValue()) {
					hand.insert(it+pos, c);
					inserted = true;
					return;
				}
			} else if (typeReached && !inserted) {
				hand.insert(it + pos, c);
				inserted = true;
				return;
			}
			pos++;
		}
	}
	else hand.push_back(c);
	if (!inserted) hand.push_back(c);
}

Card Player::GetCard()
{
	int rPos = 0 + rand() % (hand.size() - 0 + 1);
	if (hand.size() != 0) {
		Card _toreturn = hand[rPos];
		hand.erase(hand.begin() + rPos);
		return _toreturn;
	}
}

Card Player::GetCard(Type t)
{
	int pos = 0;
	for (Card& c : hand) {
		if (c.GetType() == t) { 
			Card _toreturn = c;
			hand.erase(hand.begin() + pos);
			return _toreturn;
		}
		pos++;
	}
}

void Player::PrintHand()
{
	for (Card& c : hand) {
		cout << c.GetTypeString() << "(" << c.GetValue() << ") ";
	}
	cout << endl;
}

Player::Player(string n, int i)
{
	name = n;
	id = i;
}

Player::Player()
{
	id = 0;
	name = "someone";
}
