#ifndef RANDOMIZER_H
#define RANDOMIZER_H

//Class for a public random number generator
class Randomizer
{
    public:
        //Generates a random number between min and max
        static unsigned int randomBetween
            (unsigned int minimum, unsigned int maximum);

    private:
        //Tracks whether generator is seeded
        static bool seeded;
};

#endif // RANDOMIZER_H
