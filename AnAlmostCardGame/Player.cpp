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
	if (hand.size() != 0) return hand[0 + rand() % (hand.size() - 0 + 1)];
}

Card Player::GetCard(Type t)
{
	for (Card& c : hand) {
		if (c.GetType() == t) return c;
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
}

Player::Player()
{
	id = 0;
	name = "someone";
}
