//  Daniel Fries
//  Lab 4, Project 1
//  Printing out the factors of a user specified number

#include <iostream>
using namespace std;

int main()
{
    short num1, i; // I'm saving some precious bytes by using shorts instead of ints.

    cout << "Welcome to FactorFactory!\n" << endl;
    cout << "Please enter a number to be factored:\n" << endl;
    cin >> num1;

    cout << "\nThe factors of " << num1 << " are:\n" << endl;

    for(i = 1; i <= num1; ++i)  //  Outputs any number for which the remainder is zero when divided.
    {
        if(num1 % i == 0)
            cout << i << endl;
    }

    return 0;
}
