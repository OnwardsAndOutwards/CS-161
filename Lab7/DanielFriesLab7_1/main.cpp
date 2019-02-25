//  Daniel Fries
//  Lab 7 Part 1
//  CS 161+
//  Rock, Paper, Scissors

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char computerMove, userMove;
//  int random;
char displayInstructions();
char getMove();
char getComputerMove();
int getWinner(char computerMove, char userMove);
bool playAgain();

int main()
{
    cout << "Welcome to Rock, Paper, Scissors!\n\n" << endl;
    cout << displayInstructions() << endl;

    do
    {
        getMove();
        getComputerMove();
        getWinner(computerMove, userMove);
        playAgain();

    }while (playAgain());

}
char displayInstructions()  //  Displays instructions
{
    cout << "Rock beats Scissors" << endl;
    cout << "Paper beats Rock" << endl;
    cout << "Scissors beats Paper" << endl;
}
char getMove()  //  Requests, checks and returns the player move
{
    cout << "What is your move?\n\nR = Rock // S = Scissors // P = Paper\n" << endl;
    cin >> userMove;

    userMove = tolower(userMove);  //  Uppercase to lowercase.
    while (userMove!='r'&&userMove!='s'&&userMove!='p')
    {
        cout << "Invalid input!  Try again." << endl;
        cin >> userMove;
    }
    switch (userMove)
    {
        case 'r':
            userMove = 'r';
            cout << "\nYou choose Rock\n\n";
            break;

        case 'p':
            userMove = 'p';
            cout << "\nYou choose Paper\n\n";
            break;

        case 's':
            userMove = 's';
            cout << "\nYou chose Scissors\n";
            break;
    }
    return userMove;
}
char getComputerMove()  //  Computer's move is bases on random number generation.
{
    srand(time(NULL));
    int random = (rand() %3) + 1;  //  Random number 1-3
    switch (random)
    {
        case 1:
            computerMove = 'r';
            cout << "\nThe computer chooses Rock\n\n";
            break;

        case 2:
            computerMove = 'p';
            cout << "\nThe computer chooses Paper\n\n";
            break;

        case 3:
            computerMove = 's';
            cout << "\nThe computer chooses Scissors\n\n";
            break;
    }
    return computerMove;
}
int getWinner(char computerMove, char userMove)  //  Switch statements and conditional logic determine a winner.
{
    switch(computerMove)
    {
        case 'r':
            if (userMove=='r')
                cout << "It's a tie!\n";
            if (userMove=='s')
                cout << "Rock smashes scissors  You lose!\n";
            if (userMove=='p')
                cout << "Paper covers rock.  You win!\n";
            break;
        case 's':
            if (userMove=='r')
                cout << "Rock smashes scissors.  You win!\n";
            if (userMove=='s')
                cout << "It's a tie!\n";
            if (userMove=='p')
                cout << "Scissors cut paper.  You lose!\n";
            break;
        case 'p':
            if (userMove=='r')
                cout << "Paper covers rock.  You lose!\n";
            if (userMove=='s')
                cout << "Scissors cut paper.  You win!\n";
            if (userMove=='p')
                cout << "It's a tie!\n";
            break;
    }

}
bool playAgain()  //  Asks the user for input as to weather they want to replay.
{
    char replay;
    cout << "\nWould you like to play again? (y/n)" << endl;  // FIX ME!
    cin >> replay;
    cout << replay << endl;
    if (replay=='y')
        return true;
    else
        return false;
}
