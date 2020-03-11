#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/Random.h"


class PlayerRespawnBlockRadiusRandomizer {

public:

    PlayerRespawnBlockRadiusRandomizer();
    void init(unsigned int, Random &);
    void _getLargestPrime(unsigned int)const;
    void getRadius()const;
    void getIterationCount()const;
    void markAsExhausted();
    void reduceIterationCount();
    void getNextPosition(Vec3 &, bool);
    bool hasMorePossibilities()const;
    void _isPrime(unsigned int)const;
};
