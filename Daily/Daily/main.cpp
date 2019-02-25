#include <iostream>
using namespace std;

void showInstructions();
void showBoard(int num_sticks);
int getMove(int num_sticks);
bool playAgain();

int main()
{
    do {

        int num_sticks = 11;
        bool playing = true;
        int player = 1;

        showInstructions();

        while ( playing )
        {
            showBoard(num_sticks);
            int the_move = getMove(num_sticks);
            num_sticks -= the_move;

            if ( num_sticks == 0 )
                playing = false;
            else
                if ( player == 1 )
                    player = 2;
                else
                    player = 1;
        }
        cout << " player " << player << " won!!\n";
        cout << " do you want to play again?\n";
    } while ( playAgain() );
    return 0;
}
