#include <iostream>
#include <time.h>
#include "Enemy.h"

using namespace std;

int main() {
	srand(time(NULL));

	Enemy e("Bon dia", VAMPIRE);
	cout << e.GetName() << endl << e.GetHealth() << endl << e.GetType();

	return 0;
}