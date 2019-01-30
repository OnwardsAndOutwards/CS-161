//  Daniel Fries
//  Lab 5
//  CS 161+
//  Nim


#include <iostream>

using namespace std;

int main()
{
 int sticks = 11;
 int players = 1;
 bool playing = true;
 int i = 1;

 cout << "Welcome to Nim!\n" << endl;
 cout << "Players will take turns removing 1, 2, or 3 sticks from the initial " << sticks << ".\n" << endl;
 cout << "Player 1, it's your turn!\n" << endl;
 cout << "The game currently looks like this:\n" << endl;
 cout << "|||||||||||";
 cout << "How many sticks would you like to remove? (1, 2, or 3)" << endl;

 // initialization
 // define variables
 // see if computer or two people



 while ( playing )
 {
     for (i = 0; i < 5; i++)  // ARGGGGG!
     {
         cout << "|";
     }
 // 2 -- get and validate input
 // integer between 1 and 3
 // not greater than remaining sticks

 // 3 -- update board
 // subtract move from number of sticks remaining

 // 4 -- see if done
 // if number of sticks is zero, set playing to false

 // 5 -- if not done, alternate player
 // if player 1, go to player 2
 // if player 2, go to player 1
 }

 // announce winner using player number

 return 0;
}
