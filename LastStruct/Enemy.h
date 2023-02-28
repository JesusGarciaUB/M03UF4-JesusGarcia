#pragma once
#include <iostream>
#include <string>

using namespace std;

enum EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH};

struct Enemy {
	EnemyType Type;
	int health;
	string name;
};


/// <summary>
/// recibe como par�metro un EnemyType y devuelve un string con el tipo de enemigo que es
/// </summary>
/// <param name="Type"></param>
/// <returns></returns>
string getEnemyTypeString(EnemyType Type);
/// <summary>
///  recibe dos par�metros de tipo Enemy y devuelve true si los dos enemigos tienen el mismo nombre y el mismo tipo
/// </summary>
/// <param name="e1"></param>
/// <param name="e2"></param>
/// <returns></returns>
bool equalEnemies(Enemy e1, Enemy e2);
/// <summary>
///  no recibe par�metros y devuelve un valor de tipo Enemy creado aleatoriamente gracias a la funci�n rand() . Se puede hacer uso de un array de 
/// strings global (o est�tico a la funci�n) con los posibles nombres de los enemigos.
/// </summary>
/// <returns></returns>
Enemy createRandomEnemy();