#pragma once
#include <iostream>
#include <string>
using namespace std;
class Dogs
{
public:
	string breed;
	int age;
	// Inside
	//Dogs(string x, int y) {
	//	breed = x;
	//	age = y;
	//}

	// Outside
	Dogs(string x, int y);

private:
	string owner;
protected:
	bool isVaccinated;
};

