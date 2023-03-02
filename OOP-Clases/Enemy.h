#pragma once
#include <iostream>

using namespace std;

enum Type {VAMPIRE, GHOST, WITCH, ZOMBIE};

class Enemy
{
private:
	Type type;
	string name;
	int health;
public:
	int GetHealth() { return health; }
	string GetName() { return name; }
	Type GetType() { return type; }

	Enemy();
	Enemy(int h);
	Enemy(string n, Type t, int h = 100):type(t), name(n), health(h){};
	bool ReceiveDamage(int damage);
};