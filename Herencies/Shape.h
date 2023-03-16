#pragma once
#include "Vector2.h"
#include <vector>

using namespace std;

class Shape {
protected:
	vector<Vector2> points;
	float area;
	float perimeter;
public:
	Shape(vector<Vector2> p);
};