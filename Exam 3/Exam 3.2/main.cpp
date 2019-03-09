#include <iostream>

using namespace std;

int input, area, perimeter;

int getInteger();
int calclAreaPerimeter(int);

int main()
{
    getInteger();
    calclAreaPerimeter(input);
    cout << "The area is: " << area << " square units" << endl;
    cout << "The perimeter is: " << perimeter << " units" << endl;
    return 0;
}
int getInteger()
{
    cout << "Enter an integer please: " << endl;
    cin >> input;

}
int calclAreaPerimeter(int x)
{
    area = ( input * input );
    perimeter = ( 4 * input );
}
