#include <iostream>
using namespace std;

int main()
{
    int int1, i;

    cout << "Enter a positive integer: \n";
    cin >> int1;
    while ( int1 <= 0) {  //  Traps the user in an endless loop until cooperation is achieved.
        cout << "Enter a positive integer: \n";
        cin >> int1;
    }

    cout << "The factors of  " << int1 << " are: " << endl;
    for(i = 1; i <= int1; ++i)
    {
        if(int1 % i == 0)
            cout << i << endl;
    }

    return 0;
}
