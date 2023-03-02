#include <iostream>
#include <time.h>
#include "Enemy.h"

using namespace std;

int main() {
	srand(time(NULL));

	Enemy e("Bon dia", VAMPIRE);
	Enemy e2("Bon dia", VAMPIRE);
	bool _return = e == e2;
	cout << _return;

	return 0;
}