//  Daniel Fries
//  Lab 7 Part 2
//  CS 161+
//  Guess my Number

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int randomNumber, tries, guess;
const int LOWER_NUMBER = 1;                        //These boundaries can be changed to make the game more difficult.  And tedious.
const int HIGHER_NUMBER = 99;
bool playing = true;

char displayInstructions();
int getNumber(int LOWER_NUMBER, int HIGHER_NUMBER);
int getMove();
bool playAgain();

int main()
{
    cout << displayInstructions();
    getNumber(HIGHER_NUMBER, LOWER_NUMBER);
 //   cout << randomNumber;                        //  Uncomment this to check the output of the random number generation.
    getMove();
    do
    {
        getMove();
    }while (playing);


}

//  Can't spell functions without fun!

char displayInstructions()  //  Displays instructions
{
    cout << "Guess my Number!" << endl;
    cout << "Try to guess the randomly generated number between " << LOWER_NUMBER << " and " << HIGHER_NUMBER <<"." << endl;
    cout << "Try to make the least amount of guesses possible!" << endl;
}
int getNumber(int LOWER_NUMBER, int HIGHER_NUMBER)   //  Generates a number between the two constant boundaries
{
    srand(time(NULL));
    randomNumber = (rand()%( HIGHER_NUMBER-LOWER_NUMBER ) + 1);
    return randomNumber;
}
int getMove()  //  Obtains and verifies the guess from the user, then checks to see if the guess was correct.
{
    cout << "\nMake a guess: " << endl;
    cin >> guess;
    if ((guess<LOWER_NUMBER)||(guess>HIGHER_NUMBER)) //  Probably should use a switch statement next time.
    {
        cout << "Invalid Input.  Try again: " << endl;
        cin >> guess;
    }
    else if (guess>randomNumber)
    {
        cout << "Too high!" <<endl;
        tries++;
    }
    else if (guess<randomNumber)
    {
        cout << "Too low!" <<endl;
        tries++;
    }
    else if (guess==randomNumber)
    {
        cout << "You got it in " << tries << " tries!" << endl;
        playAgain();
    }
}
bool playAgain()  //  Ye olde play again boolean
{
    char choice;
    cout << "Would you like to play again? (y/n)" << endl;
    cin >> choice;
    if (choice=='y')
    {
        getNumber(HIGHER_NUMBER, LOWER_NUMBER);
        playing=true;
        return true;
    }
    else if (choice=='n')
    {
        playing=false;
        return false;
    }
}


// fin
