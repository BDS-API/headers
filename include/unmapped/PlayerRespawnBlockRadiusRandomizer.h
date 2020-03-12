#pragma once



class PlayerRespawnBlockRadiusRandomizer {

public:
    void init(unsigned int, Random &);
    void getRadius()const;
    void getIterationCount()const;
    void _isPrime(unsigned int)const;
    PlayerRespawnBlockRadiusRandomizer();
    void _getLargestPrime(unsigned int)const;
    void getNextPosition(Vec3 &, bool);
    void markAsExhausted();
    bool hasMorePossibilities()const;
    void reduceIterationCount();
};
