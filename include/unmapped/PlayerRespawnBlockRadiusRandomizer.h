#pragma once

#include "../bedrock/util/Random.h"
#include "../bedrock/util/Vec3.h"


class PlayerRespawnBlockRadiusRandomizer {

public:
    bool hasMorePossibilities()const;
    void getIterationCount()const;
    void _isPrime(unsigned int)const;
    void reduceIterationCount();
    void _getLargestPrime(unsigned int)const;
    void init(unsigned int, Random &);
    PlayerRespawnBlockRadiusRandomizer();
    void getNextPosition(Vec3 &, bool);
    void getRadius()const;
    void markAsExhausted();
};
