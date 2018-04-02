#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <queue>

using namespace std;

//Class for a public random number generator
class Randomizer
{
    public:
        //Constructor that initializes firstNumbers as test values
        Randomizer(unsigned int count, unsigned int numbers[]);
        //Generates a random number between min and max
        static unsigned int randomBetween
            (unsigned int minimum, unsigned int maximum);

    private:
        static bool seeded; //Tracks whether generator is seeded
        static queue<unsigned int> firstNumbers; //Holds test values
};

#endif // RANDOMIZER_H
