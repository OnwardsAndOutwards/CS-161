//  Daniel Fries
//  Lab 5
//  CS 161+
//  Nim


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

 //  int players = 1;

 int sticks = 11;
 bool playerTurn = true;
 bool playing = true;
 bool playerOneTurn = true;
 int num;

 int board(int);



 cout << "Welcome to Nim!\n" << endl;
 cout << "Players will take turns removing 1, 2, or 3 sticks from the initial " << sticks << ".\n" << endl;
 cout << "Player 1, it's your turn!\n" << endl;
 cout << "The game currently looks like this:\n" << endl;
 cout << board(sticks);



 while ( playing )
 {

 }

 return 0;
}
int board(int x)
{
    for ( int i = 1; i > x; i++ )
    cout << "|";
}

