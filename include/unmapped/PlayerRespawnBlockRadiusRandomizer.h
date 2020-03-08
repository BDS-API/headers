#pragma once



class PlayerRespawnBlockRadiusRandomizer {

public:

    PlayerRespawnBlockRadiusRandomizer(void);
    void init(unsigned int, Random &);
    void _getLargestPrime(unsigned int)const;
    void getRadius(void)const;
    void getIterationCount(void)const;
    void markAsExhausted(void);
    void reduceIterationCount(void);
    void getNextPosition(Vec3 &, bool);
    bool hasMorePossibilities(void)const;
    void _isPrime(unsigned int)const;
};
