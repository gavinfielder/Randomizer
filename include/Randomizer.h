#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <queue>

using namespace std;

//Class for a public random number generator
class Randomizer
{
    public:
        //Default constructor
        Randomizer() {}
        //Constructor that initializes firstNumbers as test values
        Randomizer(unsigned int count, unsigned int numbers[]);
        //Generates a random number between min and max
        unsigned int randomBetween
            (unsigned int minimum, unsigned int maximum);
        //Enables public read access to the single instance
        static Randomizer& GetInstance() { return *sInstance; }

    private:
        unsigned int generateRandom(unsigned int min, unsigned int max);
        static Randomizer* sInstance; //singleton reference
        queue<unsigned int> firstNumbers; //Holds test values
};

#endif // RANDOMIZER_H
