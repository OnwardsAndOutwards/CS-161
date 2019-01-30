#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter a set of positive numbers between 1 and 100. " << endl;
    cin >> num1 >> num2;

    while ( num1 <= 0 ) || ( num2 <= 0 ) {
        cout << "Enter a set of positive numbers between 1 and 100. " << endl;
        cin >> num1 >> num2;
    }

    return 0;
}
