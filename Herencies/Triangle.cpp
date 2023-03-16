#include "Triangle.h"

Triangle::Triangle(vector<Vector2> p)
: Shape(p) 
{
	CalcArea();
	CalcPerimeter();
}

void Triangle::CalcArea()
{
	area = 1;
}

void Triangle::CalcPerimeter()
{
	perimeter = 1;
}
