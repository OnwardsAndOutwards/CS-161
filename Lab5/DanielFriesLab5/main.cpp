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

 int sticks=11;
 bool playerTurn = true;
 bool playing = true;
 bool playerOneTurn = true;
 int num;



 cout << "Welcome to Nim!\n" << endl;
 cout << "Players will take turns removing 1, 2, or 3 sticks from the initial " << sticks << ".\n" << endl;
 cout << "Player 1, it's your turn!\n" << endl;
 cout << "The game currently looks like this:\n" << endl;
 cout << "|||||||||||";


 while ( playing )
 {
     for (int i=1; i<sticks; i++)
        cout << "|";





 }
 // 1 -- display board
 // should use for loop
//
//    cout << "How many sticks would you like to remove? (1, 2, or 3)" << endl;
//    cin >> num;
//
//    if ( num >= 1 && num <= 3 )
//        {
//        sticks -= num;
//        cout << "The game looks like this: " << endl;
//        cout << sticks << endl;
//        }
//    else
//        cout << "Pleaes choose 1, 2 or 3. " << endl;
//        cin >> num;
//
//    if ( sticks = 0 )
//        playing == false;


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

 // announce winner using player number



 // announce winner using player number

 return 0;
}