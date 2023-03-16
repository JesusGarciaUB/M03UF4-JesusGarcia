#include <iostream>
#include "Car.h"
#include "Triangle.h"
#include "Enemy.h"
#include "Player.h"

using namespace std;

int main() {
	Enemy e(100, 10);
	Player p1(100, 10, 5);
	Character* p2 = new Player(100, 10, 5);
	e.DealDamage(p1);
	e.DealDamage(*p2);
	return 0;
}