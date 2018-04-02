#include "Randomizer.h"
#include <queue>
#include <ctime>
#include <cstdlib>

//Initialize/declare static members
bool Randomizer::seeded = false;
std::queue<unsigned int> Randomizer::firstNumbers;

//Constructor which initializes first numbers
Randomizer::Randomizer(unsigned int count, unsigned int numbers[]) {
    if (!(seeded)) //only allowed before first call
        for (unsigned int i = 0; i < count; i++)
            firstNumbers.push(numbers[i]);
}

//returns a random number between minimum and maximum
unsigned int Randomizer::randomBetween
        (unsigned int minimum, unsigned int maximum) {
    if (!(seeded)) {
        //Runs on first call only
        srand(time(0));
        seeded = true;
    }
    //If firstNumbers nonempty, return the first entry and then remove it.
    if (!(firstNumbers.empty())) {
        unsigned int toReturn = firstNumbers.front();
        firstNumbers.pop();
        return toReturn;
    }
    //Return requested random number
    return (unsigned int)(rand() % (maximum - minimum + 1) + minimum);
}
