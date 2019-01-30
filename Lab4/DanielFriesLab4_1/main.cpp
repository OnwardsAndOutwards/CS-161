//  Daniel Fries
//  Lab 4, Project 1
//  Printing out the factors of a user specified number

#include <iostream>
using namespace std;

int main()
{
    short num1, i; // I'm saving some precious bytes by using shorts instead of ints.

    cout << "Welcome to FactorFactory! " << endl;
    cout << "Please enter a number to be factored: " << endl;
    cin >> num1;

    cout << "The factors of " << num1 << " are: " << endl;

    for(i = 1; i <= num1; ++i)
    {
        if(num1 % i == 0)
            cout << i << endl;
    }

    return 0;
}
