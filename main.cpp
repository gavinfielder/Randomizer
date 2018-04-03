#include <iostream>
#include "Randomizer.h"

using namespace std;

int main()
{
    //Test first number generation
    unsigned int firstNumbers[] = {0, 1, 2, 3, 4};
    Randomizer rnd(5, firstNumbers);
    cout << rnd.randomBetween(5,10) << endl;
    cout << rnd.randomBetween(5,10) << endl;
    cout << rnd.randomBetween(5,10) << endl;
    cout << rnd.randomBetween(5,10) << endl;
    cout << rnd.randomBetween(5,10) << endl;

    //Some basic tests
    cout << rnd.randomBetween(5,10) << endl;
    cout << rnd.randomBetween(2,27) << endl;
    cout << rnd.randomBetween(2,3) << endl;
    cout << rnd.randomBetween(169,250) << endl;

    return 0;
}
