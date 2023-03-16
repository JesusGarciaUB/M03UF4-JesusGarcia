#pragma once
#include "Character.h"

class Enemy : public Character {
public:
	Enemy(int h, int d);
	void ReceiveDamage(int d) override;
};