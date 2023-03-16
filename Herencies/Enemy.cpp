#include "Enemy.h"

Enemy::Enemy(int h, int d) : Character(h, d) {

}

void Enemy::ReceiveDamage(int d) {
	health -= d;
}