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
// user input variable for string.
string userString;

int main()
{
    //// Challenge 1
    //// Prints Hello World! to the screen.
    //cout << "Hello World!\n\n";
    //
    //// Challenge 2
    //// Utilize the cout object with the << operator to output values or print text.
    //cout << "This is the project I'm using to hold my C++ challenges, enjoy!\n\n";

    //// Challenge 3
    //// Utilize the \n character to insert a new line.
    //cout << "This is me adding a new line.\n\n";

    //// Challenge 4
    //// Display the value of a declared variables
    //cout << "Displaying myString: " + myString + "\n\n";

    //// Challenge 5
    //// Utilize the const keyword.
    //cout << "Displaying my const variable: ";
    //cout << myDouble << endl << endl;

    //// Challenge 6
    //// Create a program that accepts user intput
    //cout << "Please enter your name.\n";
    //cin >> userString;
    //cout << "Hello, " + userString + "!\n\n";

    //// Challenge 7
    //// Utilize float keyword
    //float myFloat = 4.75;
    //cout << "Displaying myFloat value: ";
    //cout << myFloat << endl << endl;

    //// Challenge 8
    //// Utilize string data type, and concatenate a string
    //myString = "Cowboy";
    //secondString = "Beebop";
    //cout << "This is me concatenating strings: " + myString + " " + secondString + "\n\n";

    //// Challenge 9
    //// Utilize the length() function
    //myString = "This is the string i'm using for this challenge.";
    //cout << myString << endl;
    //cout << "The length of myString is: " << myString.length() << endl;
    //// Access and print the third character in a string
    //cout << "The third character in myString is: " << myString[2] << endl;
    //// Change the value of a specific character in a string
    //myString[47] = '!';
    //cout << myString + "\n\n";

    //// Challenge 10
    //// Math Operators
    //double a = 5;
    //double b = 10;

    //cout << "5 + 10 = " << a + b << endl;
    //cout << "5 - 10 = " << a - b << endl;
    //cout << "5 * 10 = " << a * b << endl;
    //cout << "5 / 10 = " << a / b << endl;
    //cout << "5 incrimented is " << ++a << endl << endl;

    //// Challenge 11
    //// Comparison Operators
    //cout << "Is 5 > 10? " << (a > b) << endl;
    //cout << "Is 5 == 10? " << (a == b) << endl;
    //cout << "Is 5 != 10? " << (a != b) << endl;
    //cout << "Is 5 <= 10? " << (a <= b) << endl << endl;

    //// Challenge 12
    //// Assignment Operators
    //int x = 5;
    //cout << "Assinging a value of 5 to the int x: " << x << endl;
    //x += 5;
    //cout << "Using += to add 5 to x: " << x << endl;
    //x &= 3;
    //cout << "Using Bitwise operator &= to calculate 5 & 3: " << x << endl;
    //x <<= 3;
    //cout << "Using Bitwise shift to calculate x <<= 3 " << x << endl << endl;

    // Challenge 35
    // Exceptions
    try 
    {
        int myAge = 25;
        if (myAge >= 18)
        {
            cout << "You are old enough to enter!";
        }
        else 
        {
            throw(myAge);
        }
    }
    catch (int myNum) 
    {
        cout << "You are NOT old enough to enter! \n";
        cout << "Age is: " << myNum;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Deug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
