//  Daniel Fries
//  Lab 1

#include <iostream>

using namespace std;

string name;
int age;

int main()
{
    cout << "What is your name?" << endl; // Prompts user for information
    cin >> name;  //  User enters data to be stored as a string
    cout << "What is your age?" << endl;
    cin >> age;

    cout << "Your name is " << name << " and your age is " << age << "." << endl;
}
