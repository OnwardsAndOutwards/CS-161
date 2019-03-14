//  Daniel Fries
//  Lab 9
//  CS 161+
//  I/O

#include <iostream>
#include <fstream>   //  Always necessary when reading/writing files
#include <string>    //  Do I actually need this?

char code, character;
int value1, value2;

void diamond(char, int, //and ofstream outfile);
void rectangle(char, int);
void square(char, int, int);
void triangle(char, int);

using namespace std;

int main()
{
    // Open infile.dat
    ofstream inFile("infile.dat");

    // Open outfile.dat
    ofstream outFile("outfile.dat");

    // Read infile.dat, one line at a time, until the file is at EOF
    while (!inFile.eof())
    {string triangle(char, int);
        code >> character >> value1 >> value2;
            switch(code)
            {
            case 'D':
                break;
            case 'R':
                break;
            case 'S':
                break;
            case 'T':
                break;
            case 'E':
                break;
            }
    }

    // Interpret the information and write the appropriate output to outfile.dat


    // Close both files
    inFile.close();
    outFile.close();


    return 0;
}

// Four functions D,R,S,T (also pass character and dimensions)
void diamond(char, int); //
void rectangle(char, int);
void square(char, int, int);
void triangle(char, int);
