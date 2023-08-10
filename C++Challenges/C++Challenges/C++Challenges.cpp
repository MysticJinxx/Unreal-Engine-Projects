// C++Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Declaring variables
char myChar = 2;
int myInt = 4;
const double myDouble = 4.2;
bool myBool = true;
string myString = "Cowboy";
string secondString = "Beebop";

int main()
{
    // Challenge 1
    // Prints Hello World! to the screen.
    cout << "Hello World!\n";

    // Challenge 2
    // Utilize the cout object with the << operator to output values or print text.
    cout << "This is the project I'm using to hold my C++ challenges, enjoy!\n";

    // Challenge 3
    // Utilize the \n character to insert a new line.
    cout << "This is me adding a new line.\n";

    // Challenge 4
    // Display the value of a declared variables
    cout << "Displaying myString: " + myString + "\n";

    // Challenge 5
    // Utilize the const keyword.
    cout << "Displaying my const variable: ";
    cout << myDouble << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
