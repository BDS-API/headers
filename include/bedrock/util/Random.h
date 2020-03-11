#pragma once

#include "./Random.h"


class Random {

public:
    static long mThreadLocalRandom;


    void nextInt(int);
    void nextFloat();
    Random(Random const&);
    void nextBoolean();
    void nextFloat(float);
    Random(unsigned int);
    void setSeed(unsigned int);
    void nextInt();
    Random();
    void nextInt(int, int);
    void nextGaussianInt(int);
    void getSeed()const;
    void nextGaussianFloat();
    void max();
    void min();
    void operator()();
    void nextFloat(float, float);
    void nextGaussianVec3();
    void nextGaussian();
    void nextVec3();
    void getThreadLocal();
    void nextUnsignedInt(unsigned int);
    void nextIntInclusive(int, int);
    void operator()(int);
    void nextDouble();
    void nextUnsignedChar();
};
