#include <iostream>

using namespace std;

int area(int length, int width = 0);

int main()
{
    int length, width;

        // for rectangle use both arguments
    cout << "Enter length and width of a rectangle" << endl;
    cin >> length >> width;

    cout << "The area is " << area(length, width) << endl;

      // for square, only need first argument
    cout << "Enter side of a square" << endl;
    cin >> length;

    cout << "The area is " << area(length) << endl;

    return 0;
}

int area(int length, int width)
{
    if ( width == 0 )
        return length * length;

    return length * width;
}
