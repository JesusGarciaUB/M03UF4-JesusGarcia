#include <iostream>
#include <time.h>
#include "Enemy.h"

using namespace std;
const int MAX_ENEMIES = 5;

int main() {
	srand(time(NULL));
	Enemy enemies[MAX_ENEMIES];
	bool rep;

	for (int x = 0; x < MAX_ENEMIES; x++) {
		rep = true;
		while (rep) {
			enemies[x] = createRandomEnemy();
			if (x != 0) {
				for (int i = 0; i < x; i++) rep = equalEnemies(enemies[x], enemies[i]);
			}
			else rep = false;
		}
	}

	for (Enemy& e : enemies) {
		cout << e.name << " is a " << getEnemyTypeString(e.Type) << " whose life is " << e.health << endl;
	}

	return 0;
}