#include "Enemy.h"
#include <stdlib.h>

string getEnemyTypeString(EnemyType Type) {
	switch (Type) {
	case ZOMBIE:
		return "zombie";
	case VAMPIRE:
		return "vampire";
	case GHOST:
		return "ghost";
	case WITCH:
		return "witch";
	}
}

bool equalEnemies(Enemy e1, Enemy e2) {
	if (e1.name == e2.name && getEnemyTypeString(e1.Type) == getEnemyTypeString(e2.Type)) return true;
	return false;
}

string names[10] = {"Ramon", "Cajal", "Manuel", "Francisco", "Bernat", "Antonio", "Roberto", "Victor", "Bienvenido", "Sinforiano"};

Enemy createRandomEnemy() {
	Enemy enemy;
	enemy.name = names[0 + rand() % (9 - 0 + 1)];
	enemy.health = 50 + rand() % (500 - 50 + 1);
	enemy.Type = EnemyType(0 + rand() % (3 - 0 + 1));
	return enemy;
}