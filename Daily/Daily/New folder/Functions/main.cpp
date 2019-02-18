#include <iostream>

using namespace std;

bool isLeapYear(int);


int main()
{



    int year;
//    int exponent;

    cout << "year: " << endl;
    cin >> year;

    cout << isLeapYear(year);


}

bool isLeapYear(int year)
{
    if ( ( year % 4 == 0 ) )
    {
        if ( year % 100 != 0 )
            return false;
        if ( year % 400 != 0 )
            return false;
    return true;
    }

}
