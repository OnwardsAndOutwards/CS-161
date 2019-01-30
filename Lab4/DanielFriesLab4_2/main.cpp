//  Daniel Fries
//  Lab 4, Project 2
//  Testing the largest and smallest of 2 numbers 1-100

#include <iostream>
using namespace std;

int main()
{
    short num1, num2;

    cout << "Enter two random numbers 1 - 100: " << endl;
    cin >> num1 >> num2;

    while ( num1 < 1 || num1 > 100 || num2 < 1 || num2 > 100 )
        {
        cout << "Only numbers between 1 and 100, smart guy.\n";
        cin >> num1 >> num2;
        }

    return 0;
}
