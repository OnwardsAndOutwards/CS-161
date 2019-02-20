//  Daniel Fries
//  Lab 7 Part 2
//  CS 161+
//  Guess my Number

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int randomNumber, tries, guess;
const int LOWER_NUMBER = 1;
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
    cout << randomNumber;
    getMove();
    do
    {
        getMove();
    }while (playing);


}
char displayInstructions()  //  Displays instructions
{
    cout << "Guess my Number!" << endl;
    cout << "Try to guess the randomly generated number between " << LOWER_NUMBER << " and " << HIGHER_NUMBER <<"." << endl;
    cout << "Try to make the least amount of guesses possible!" << endl;
}
int getNumber(int LOWER_NUMBER, int HIGHER_NUMBER)
{
    srand(time(NULL));
    randomNumber = (rand()%( HIGHER_NUMBER-LOWER_NUMBER ) + 1);  //  Maybe ask Paul about this?
    return randomNumber;
}
int getMove()
{
    cout << "Make a guess: " << endl;
    cin >> guess;
    if (guess>randomNumber)
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
    }
}

//bool playAgain();
