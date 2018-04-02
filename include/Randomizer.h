#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <queue>

using namespace std;

//Class for a public random number generator
class Randomizer
{
    public:
        //Constructor that initializes firstNumbers
        Randomizer(... array<unsigned int^>^ numbers );
        //Generates a random number between min and max
        static unsigned int randomBetween
            (unsigned int minimum, unsigned int maximum);

    private:
        //Tracks whether generator is seeded
        static bool seeded;
        static queue<unsigned int> firstNumbers;
};

#endif // RANDOMIZER_H
