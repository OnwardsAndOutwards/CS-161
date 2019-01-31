#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Enter a number 1-10:\n";
    cin >> num;

    do
    {
        cout << "Follow the rules, dingus!\n";
        cin >> num;
    } while ( num <=0 || num >= 11 );


    return 0;
}
