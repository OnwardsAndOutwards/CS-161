//  Daniel Fries
//  Lab 5
//  CS 161+
//  Computing the area of different shapes.

#include <iostream>
#include <iomanip>


using namespace std;

float circle(float);
float square(float);
float rectangle(float,float);
float triangle(float,float);

char shape;
float area, heigth, radius, side, length, width;
const float pi = 3.1416;


int main()
{
    cout << "What shape?\n" << endl;
    cout << "Circle "<< setw(12) << right << 1 << endl;
    cout << "Square "<< setw(12) << right << 2 << endl;
    cout << "Rectangle "<< setw(9) << right << 3 << endl;
    cout << "Triangle "<< setw(10) << right << 4 << "\n" << endl;
    cout << "EXIT "<< setw(14) << right << 0 << "\n\n" << endl;

    cin >> shape;

    switch(shape)
    {
    case '1' :
        cout << "\n\nPlease enter the radius of the circle." << endl;
        cin >> radius;
        cout << "The area of the circle is: " << circle(radius) << endl;
        break;

    case '2' :
        cout << "\n\nPlease enter the length of the square's side." << endl;
        cin >> side;
        cout << "The area of the square is: " << square(side) << endl;
        break;

    case '3' :
        cout << "\n\nPlease enter the sides of the rectangle." << endl;
        cin >> side >> length;
        cout << "The area of the rectangle is: " << rectangle(side, length) << endl;
        break;

    case '4' :
        cout << "\n\nPlease enter the sides of the triangle." << endl;
        cin >> heigth >> width;
        cout << "The area of the triangle is: " << triangle(heigth, width) << endl;
        break;

    case '0' :
        break;

   default:
    cout << "Please enter a number, 1 - 4.";

    }

    return 0;
}
// Functions!

float circle(float x)  //  multiplies the pi by the radius squared
{
    float area;
    area = pi*x*x;
    return(area);
}
float square(float x)  //  squares the length of a side
{
    float area;
    area = x*x;
    return(area);
}
float rectangle(float x, float y)  //  multiplies the side by the length
{
    float area;
    area = x*y;
    return(area);
}
float triangle(float x, float y)  //  multiplies the height by the width and divides by 2
{
    float area;
    area = x*y*.5;
    return(area);
}
