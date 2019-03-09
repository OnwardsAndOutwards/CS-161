#include <iostream>

using namespace std;

int area2(int area, int length, int width = 0);

int main()
{
    int length, width, area;

      // for rectangle use two arguments
    cout << "Enter length and width of a rectangle" << endl;
    cin >> length >> width;

    cout << "The area is " << area2(area, length, width) << endl;

      // for squares use one argument
    cout << "Enter side of a square" << endl;
    cin >> length;

    cout << "The area is " << area2(area, length) << endl;

    return 0;
}

int area2(int area, int length, int width)
{
    if ( width == 0 )
        area = length * length;
    else
        area = length * width;
}

