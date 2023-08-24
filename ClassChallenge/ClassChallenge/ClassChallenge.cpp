// ClassChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	Rectangle myRectangle;
	Triangle myTriangle;
	Circle myCircle;

	myRectangle.color = "black";
	myRectangle.height = 10;
	myRectangle.width = 20;
	myRectangle.GetArea();
	cout << "The area of the rectangle is: " << myRectangle.GetArea() << "\n";

	myTriangle.color = "Red";
	myTriangle.base = 5.0;
	myTriangle.height = 10.0;
	myTriangle.GetArea();
	cout << "The area of the triangle is: " << myTriangle.GetArea() << "\n";

	myCircle.color = "Blue";
	myCircle.radius = 10.0;
	myCircle.GetArea();
	cout << "The area of the circle is: " << myCircle.GetArea();
}

