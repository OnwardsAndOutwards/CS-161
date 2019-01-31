//  Daniel Fries
//  Lab 4, Project 2
//  Testing the largest and smallest of a set of numbers between 1-100

//  This program throws an error as expected when negative numbers are entered, but it also records those numbers.  This is a bug to be fixed.
//  Fulfills the requirements, though!


#include <iostream>

using namespace std;

string name;
int num = 1000000;
int high, low;
int i = 0;

int main()
{

    while ( num != 0 )
    {
        cout << "Enter some integers between 1 and 100.  Enter 0 to when done.\n";
        cin >> num;

        if ( num < 0 || num > 100 )
            cout << "Only integers 1-100, please.\n";

        else if ( i == 0 )
        {
            high = num;
            low = num;
        }

        else if ( num >= 1 || num <= 100 )
        {
            if ( num > high && num != 0 )
                high = num;
            else if ( num < low && num != 0 )
                low = num;
        }
        i++;
    }
    cout << "Highest: " << high << endl;
    cout << "Lowest: " << low << endl;




return 0;
}
