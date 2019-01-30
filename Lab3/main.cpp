#include <iostream>

using namespace std;

int main()
{
    short num1, num2;  //  Short instead if int to save some precious bits
    char op;

    cout << "Enter two integers:\n";
    cin >> num1 >> num2;
    cout << "Enter an operator from the list * / % + - ";
    cin >> op;

    switch(op)
    {
        case '*':
            cout << num1*num2;
            break;

        case '/':
            if ( num2 != 0 ) {
                cout << num1/num2;
            }
            else {
                cout << "You cannot divide by zero.";  //  You can't even try
            }
            break;


        case '%':
            cout << num1%num2;
            break;

        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        default:
            cout << "Error! operator is not correct";  //  Nice try, though.
            break;
    }

    return 0;
}
