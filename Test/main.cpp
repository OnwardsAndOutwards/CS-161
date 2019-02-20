// Random number generator based on seconds elapsed since 1970 (Epoch)


#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int random;

int main()
{

    srand(time(NULL));
    random = (rand() %3) + 1;  //  Generates a number 1-3
    cout << random;
}
