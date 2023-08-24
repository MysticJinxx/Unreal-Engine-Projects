#pragma once
#include <string>
#include "Shape.h"
using namespace std;

class Rectangle : public Shape 
{
public:
	int height;
	int width;

	int GetArea() {
		int result = height* width;
		return result;
	}
};

