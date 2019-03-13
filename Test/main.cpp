#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

int random;

int main()
{
    ofstream outFile;

    outFile.open("sample.txt");

    outFile << "First Number: " << 5 << endl;

    outFile.close();

    return 0;
}
