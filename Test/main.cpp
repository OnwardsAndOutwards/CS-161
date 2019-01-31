#include <iostream>
#include <string>

using namespace std;

int userchoice, compchoice, wincode;
string winner, convertchoice, convertwin;

int getUserChoice();
int getComputerChoice();
string determineWinner();
string displayResults(int compchoice, int userchoice, int wincode);

int main()
{


    getUserChoice();
    if (userchoice == 1 || userchoice == 2 || userchoice == 3)
    {
        getComputerChoice();
        determineWinner();
        displayResults(compchoice, userchoice, wincode);
    }
}
int getUserChoice(int userchoice)
{
    cout << "Game Menu" << endl;
    cout << "---------" << endl;
    cout << "1) Rock    " << endl;
    cout << "2) Paper   " << endl;
    cout << "3) Scissors" << endl;
    cout << "4) Quit    " << endl;
    cout << " " << endl;
    cout << "Enter your choice:";
    cin >> userchoice;

    getUserChoice();

    return 0;
}
int getComputerChoice()
{
    rand() % 3 + 1;

    return 0;
}
string determineWinner(int compchoice, int userchoice, string winner)
{
if (compchoice == 1)
{
    if (userchoice == 1)
    {
        winner = "It's a tie!";
        wincode = 0;
    }
    else if (userchoice == 2)
    {
        winner = "User";
        wincode = 1;
    }
    else
    {
        winner = "Computer";
        wincode = 2;
    }
}
else if (compchoice == 2)
{
    if (userchoice == 1)
    {
        winner = "Computer";
        wincode = 2;
    }
    else if (userchoice == 2)
    {
        winner = "It's a tie!";
        wincode = 0;
    }
    else
    {
        winner = "User";
        wincode = 1;
    }

}
else
{
    if (userchoice == 1)
    {
        winner = "User";
        wincode = 1;
    }
    else if (userchoice == 2)
    {
        winner = "Computer";
        wincode = 2;
    }
    else
    {
        winner = "It's a tie!";
        wincode = 0;
    }
}
}
string displayResults(int userchoice, int compchoice, int wincode)
{
    cout << "============================================" << endl;
    convertchoice(userchoice);
    cout << "You selected: " << userchoice << endl;
    convertchoice(userchoice);
    cout << "The computer selected: " << compchoice << endl;
    convertwin(wincode);
    cout << "Game Winner: " << winner << endl;
    cout << "============================================" << endl;
}
string convertchoice(int compchoice, int userchoice)
{
    if (compchoice == 1 || userchoice == 1)
        return "Rock";
    else if (compchoice == 2 || userchoice == 2)
        return "Paper";
    else
        return "Scissors";
}
string convertwin(int wincode)
{
    if (wincode == 1)
        winner = "User";
    else if (wincode == 2)
        winner = "Computer";
    else (wincode == 0)
        winner = "Tie";
}
system ("pause");
return 0;
