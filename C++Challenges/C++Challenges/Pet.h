#pragma once
#include <iostream>
#include <string>
using namespace std;
// Challenge 33 
// Inheritance
class Pet
{
public:
	string breed;
	int age;

	void Movement() {
		cout << "Different pets move in different ways";
	}
};

// using : symbol, clas Dogs inherits from class Pet
class Dog : public Pet
{
public:
	
	// Inside
	//Dogs(string x, int y) {
	//	breed = x;
	//	age = y;
	//}

	// Outside
	Dog(string x, int y);

	void Movement() {
		cout << "Dogs walk on four legs";
	}

private:
	string owner;
protected:
	bool isVaccinated = true;
};

// Multilevel Inhertance
// Derive a class from more than one base class (using a comma-separated list).
class Pitbull : public Dog
{
	string name;
	bool HasVaccinations() {
		return isVaccinated;
	}
};


