#include "Randomizer.h"
#include <ctime>
#include <cstdlib>

//Initialize static members
bool Randomizer::seeded = false;

//returns a random number between minimum and maximum
unsigned int Randomizer::randomBetween
        (unsigned int minimum, unsigned int maximum) {
    if (!(seeded)) {
        //Runs on first call only
        srand(time(0));
        seeded = true;
    }
    //Return requested random number
    return (unsigned int)(rand() % (maximum - minimum + 1) + minimum);
}
