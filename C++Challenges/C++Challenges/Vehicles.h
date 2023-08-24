#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicles
{
public:
	string make;
	string model;

	void InsideFunction() {
		cout << "This function is inside the Vehicles Class";
	}

	void OutSideFunction();
};

