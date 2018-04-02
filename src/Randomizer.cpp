#include "Randomizer.h"
#include <queue>
#include <ctime>
#include <cstdlib>

//Initialize static members
bool Randomizer::seeded = false;
queue<unsigned int> Randomizer::firstNumbers = new queue();

//Constructor which initializes first numbers
Randomizer::Randomizer(... array<unsigned int^>^ numbers ) {
    //TODO


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
        unsigned int toReturn = firstNumbers.first();
        firstNumbers.pop();
        return toReturn;
    }
    //Return requested random number
    return (unsigned int)(rand() % (maximum - minimum + 1) + minimum);
}
