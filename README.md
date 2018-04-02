# Randomizer


Author: Gavin Fielder

I have implemented a public random number generator using a singleton design pattern, implemented by using only static members in the class. 

A constructor is provided which can accept _N_ ordered test values. Provided the constructor is called before any function call, the random number generator will produce these test values on the first _N_ calls. Any call to the constructor subsequent to any function call does nothing. 

This feature was implemented as a constructor as per the challenge requirements. Since it creates an object in memory, this is not ideal.