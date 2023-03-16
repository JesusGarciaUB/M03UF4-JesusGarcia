#include "Character.h"

Character::Character(int h, int d)
	: health(h), damage(d)
{
}

void Character::DealDamage(Character& other) {
	other.ReceiveDamage(damage);
}
