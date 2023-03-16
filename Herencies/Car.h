#pragma once
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
public:
	void PrintStats() {
		cout << speed << " - " << maxSpeed;
	}
};