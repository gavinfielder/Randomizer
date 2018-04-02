#include <iostream>
#include "Randomizer.h"

using namespace std;

int main()
{
    //Test first number generation
    unsigned int firstNumbers[] = {0, 1, 2, 3, 4};
    Randomizer(5, firstNumbers);
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;

    //Some basic tests
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(2,27) << endl;
    cout << Randomizer::randomBetween(2,3) << endl;
    cout << Randomizer::randomBetween(169,250) << endl;

    //Ensure predicted number generation cannot be recalled
    Randomizer(5, firstNumbers);
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(5,10) << endl;
    cout << Randomizer::randomBetween(2,27) << endl;
    cout << Randomizer::randomBetween(2,3) << endl;
    cout << Randomizer::randomBetween(169,250) << endl;

    return 0;
}
