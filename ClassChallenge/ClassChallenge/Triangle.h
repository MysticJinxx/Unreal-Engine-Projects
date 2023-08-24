#pragma once
#include <string>
#include "Shape.h"

using namespace std;

class Triangle : public Shape
{
public:
	double base;
	double height;

	double GetArea() {
		double result = 0.5 * base* height;
		return result;
	}
};

