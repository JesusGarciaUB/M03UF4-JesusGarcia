#include "Player.h"

Player::Player(int h, int d, int def)
: Character(h, d), defense(def) {
}

void Player::ReceiveDamage(int d)
{
	if (d > defense) health -= (d - defense);
}
