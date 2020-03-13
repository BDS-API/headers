#pragma once



class PlayerRespawnBlockRadiusRandomizer {

public:
    PlayerRespawnBlockRadiusRandomizer(); // _ZN34PlayerRespawnBlockRadiusRandomizerC2Ev
    void init(unsigned int, Random &); // _ZN34PlayerRespawnBlockRadiusRandomizer4initEjR6Random
    void _getLargestPrime(unsigned int)const; // _ZNK34PlayerRespawnBlockRadiusRandomizer16_getLargestPrimeEj
    void getRadius()const; // _ZNK34PlayerRespawnBlockRadiusRandomizer9getRadiusEv
    void getIterationCount()const; // _ZNK34PlayerRespawnBlockRadiusRandomizer17getIterationCountEv
    void markAsExhausted(); // _ZN34PlayerRespawnBlockRadiusRandomizer15markAsExhaustedEv
    void reduceIterationCount(); // _ZN34PlayerRespawnBlockRadiusRandomizer20reduceIterationCountEv
    void getNextPosition(Vec3 &, bool); // _ZN34PlayerRespawnBlockRadiusRandomizer15getNextPositionER4Vec3b
    bool hasMorePossibilities()const; // _ZNK34PlayerRespawnBlockRadiusRandomizer20hasMorePossibilitiesEv
    void _isPrime(unsigned int)const; // _ZNK34PlayerRespawnBlockRadiusRandomizer8_isPrimeEj
};
