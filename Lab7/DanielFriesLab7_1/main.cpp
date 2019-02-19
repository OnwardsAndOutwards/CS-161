//  Daniel Fries
//  Lab 7 Part 1
//  CS 161+
//  Rock, Paper, Scissors

#include <iostream>

using namespace std;

char computerMove, userMove;

char displayInstructions();
char getMove();
int getWinner(char computerMove, char userMove);
bool playAgain();

int main()
{
    cout << "Welcome to Rock, Paper, Scissors!\n\n" << endl;
    cout << displayInstructions() << endl;
    cout << getMove() << endl;


    bool playing = true;


    return 0;
}
char displayInstructions()
{
    cout << "     Rock beats Scissors" << endl;
    cout << "       Paper beats Rock" << endl;
    cout << "     Scissors beats Paper" << endl;
}
char getMove()
{
    cout << "What is your move?\n\n R = Rock // S = Scissors // P = Paper" << endl;
    cin >> userMove;
    cout << userMove;

    while ( userMove != 'R' or userMove != 'P' or userMove != 'S' )
    {
        cout << "Invalid input!  Try again:  " << endl;
        cin >> userMove;

    }
}
int getWinner(char computerMove, char userMove)
{

}
//bool playAgain()
