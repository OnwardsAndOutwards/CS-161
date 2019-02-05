#include <iostream>
#include <string>

using namespace std;

char option;




int main()
{

    cout << "Welcome to Lane Office!\n\n" << endl;
    cout << "Please select an option:\n1) New\n2) Open\n3) Save \n4) Quit\n\n" << endl;

    cin >> option;


    switch (option)
    {
        case '1':
            cout << "NEW!";
            break;
        case '2':
            cout << "OPEN!";
            break;
        case '3':
            cout << "SAVE!";
            break;
        case '4':
            cout << "QUIT!";
            break;
    }
return 0;
}
