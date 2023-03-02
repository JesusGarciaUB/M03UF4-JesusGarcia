#include "Enemy.h"
#include <stdlib.h>

//string names[10] = { "Ramon", "Cajal", "Manuel", "Francisco", "Bernat", "Antonio", "Roberto", "Victor", "Bienvenido", "Sinforiano" };

Enemy::Enemy() {
	name = "--- NO NAME ----";
	health = 100 + rand() % (500 - 100 + 1);
	type = Type(0 + rand() % 4);
}
Enemy::Enemy(int h) {
	name = "---NO NAME---";
	health = h;
	type = Type(0 + rand() % (3 - 0 + 1));
}

bool Enemy::ReceiveDamage(int damage) {
	health -= damage;
	return health <= 0;
}