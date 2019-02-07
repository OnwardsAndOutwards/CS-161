//  Daniel Fries
//  Lab 5
//  CS 161+
//  Nim

#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int total = 11;
	int n, sticks;
	bool winner = false;

	sticks = total;

	cout << "" << endl;
	cout << " *         *     *     *           *             " << endl;  //  A CGI masterpiece, I know.
	cout << " * *       *     *     * *       * *             " << endl;
	cout << " *   *     *     *     *   *   *   *             " << endl;
	cout << " *     *   *     *     *     *     *             " << endl;
	cout << " *       * *     *     *           *             " << endl;
	cout << " *         *     *     *           *             \n" << endl;

	cout << "Welcome to Nim!\n\n" << endl;
	cout << "Players will take turns removing 1, 2, or 3 sticks from the initial 11.\n\nThe player removing the last stick wins!\n" << endl;

	do
	{
		if (sticks > 0)
		{
			cout << "\nPlayer 1, it's your turn!\n" << endl;
            cout << "The game currently looks like this:\n" << endl;
            for ( int i = 0; i < sticks; i++ )                       //  It's a for loop!
                cout << "|";
			cout << "\n\nHow many sticks would you like to remove? (1, 2, or 3)\n" << endl;
			cin >> n;

			if (n >= 1 && n <= 3 && ( sticks-n  >= -1))  //  Checks to make sure number of sticks is correct.
			{
				sticks -= n;
			}
			else
			{
				cout << "INVALID INPUT!\n" << endl;
			}
			if (sticks < 1 )
			{
				winner = true;
				cout << "\nPlayer 1 WINS!" << endl;
			}
		}
		if (sticks > 0)
		{
			cout << "\nPlayer 2, it's your turn!\n" << endl;
            cout << "The game currently looks like this:\n" << endl;
            for ( int i = 0; i < sticks; i++ )
                cout << "|";
			cout << "\n\nHow many sticks would you like to remove? (1, 2, or 3)\n" << endl;
			cin >> n;

			if (n >= 1 && n <= 3 && ( sticks-n >= -1))  //  Checks to make sure number of sticks is correct.
			{
				sticks -= n;
			}
			else
			{
				cout << "INVALID INPUT!\n" << endl;
			}
			if (sticks < 1 )
			{
				winner = true;
				cout << "\nPlayer 2 WINS!" << endl;
			}
		}

	}while(!winner);

}
