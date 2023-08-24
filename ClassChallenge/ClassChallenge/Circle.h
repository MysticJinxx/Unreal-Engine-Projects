#pragma once
#include <string>
#include "Shape.h"

using namespace std;

class Circle : public Shape
{
public:
	double radius;

	double GetArea() {
		double pi = 2 * acos(0.0);
		double result = pi* radius* radius;
		return result;
	}
};

