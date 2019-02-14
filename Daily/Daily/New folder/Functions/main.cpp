#include <iostream>

using namespace std;

int power(int, int);

int main()
{
    int base;
    int exponent;

    cout << "base: " << endl;
    cin >> base;
    cout << "exponent: " << endl;
    cin >> exponent;

    cout << power(base, exponent);


}

int power(int base, int exponent)
{
    int answer = 1;

    for (int i = 1; i <= exponent; i++)
    {
        answer = answer*base;
    }


    return answer;
}

