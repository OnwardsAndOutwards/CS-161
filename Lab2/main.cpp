#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>


using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(0)));

    short num1, num2, sum, guess;
    num1 = ( rand() % 98 + 1 );  //  manual randomization
    num2 = ( rand() % 98 + 1 );  //  manual randomization
    sum = ( num1 + num2 );

    cout << "Whats is the sum of " << num1 << " and "  << num2 << "?\n";
    cin >> guess;
    cout << "\n" << setw(3) << num1 << endl;
    cout << "+" << setw(2) << num2 << endl;
    cout << "___\n" << endl;
    cout << setw(3) << right << sum << endl;
    return 0;
}
