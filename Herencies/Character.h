#pragma once

class Character {
protected:
	int health;
	int damage;
public:
	Character(int h, int d);
	virtual void ReceiveDamage(int d) = 0;
	void DealDamage(Character& other);
};