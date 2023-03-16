#pragma once
#include "Character.h"

class Player : public Character {
protected:
	int defense;
public:
	Player(int h, int d, int def);
	void ReceiveDamage(int d) override;
};