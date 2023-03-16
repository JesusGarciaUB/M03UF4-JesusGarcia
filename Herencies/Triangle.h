#pragma once
#include "Shape.h"

class Triangle : public Shape {
public:
	Triangle(vector<Vector2> p);
private:
	void CalcArea();
	void CalcPerimeter();
};