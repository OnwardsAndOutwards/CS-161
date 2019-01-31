#include <iostream>
#include "windows.h"

using namespace std;

char map[10][20] = {
    "###################",
    "#!                #",
    "#                 #",
    "#                 #",
    "#                 #",
    "#                 #",
    "#                 #",
    "#                 #",
    "###################"
};

int x=1;
int y=1;

bool playing = true;


int main()
{
    while (playing == true) {
        system("cls");  // clears the screen at the beginning of the loop

        for(int display=0; display<10; display++){
            cout << map[display] << endl;
        }
        system("pause>nul");  // prevents flicker by pausing until...

        // check if an arrow is being pressed

        if(GetAsyncKeyState(VK_DOWN)){
            int y2 = y+1;
            if (map[y2][x] == ' '){
                map[y][x] = ' ';
                y++;
                map[y][x] = '!';
            }
        }

        if(GetAsyncKeyState(VK_UP)){
            int y2 = y-1;
            if (map[y2][x] == ' '){
                map[y][x] = ' ';
                y--;
                map[y][x] = '!';
            }
        }

        if(GetAsyncKeyState(VK_RIGHT)) {
            int x2 = x+1;
            if (map[y][x2] == ' '){
                map[y][x] = ' ';
                x++;
                map[y][x] = '!';
            }
        }

        if(GetAsyncKeyState(VK_LEFT)) {
            int x2 = x-1;
            if (map[y][x2] == ' '){
                map[y][x] = ' ';
                x--;
                map[y][x] = '!';
            }
        }

        if(GetAsyncKeyState(VK_ESCAPE)){
           playing = false;
        }
    }

    system("cls");  //  Clears Screen
    for (int i=0; i < 1000000 ;i++)
        cout << "GAME OVER ";

    return 0;
    }
