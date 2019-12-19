#pragma once

using namespace Core;

class Random {

public:

    void nextInt(int);
    void _genRandInt32(void);
    void _initGenRand(unsigned int);
    void nextFloat(void);
    void _genRandReal2(void);
    void nextBoolean(void);
    void nextFloat(float);
    Random(unsigned int);
    void _setSeed(unsigned int);
    void _initGenRandFast(unsigned int);
    void setSeed(unsigned int);
    void nextInt(void);
    Random(void);
    void nextInt(int, int);
    void nextGaussianInt(int);
    void getSeed(void)const;
    void nextGaussianFloat(void);
    void nextUnsignedInt(void);
    void nextFloat(float, float);
    void nextGaussianVec3(void);
    void nextGaussian(void);
    void nextVec3(void);
    void nextUnsignedInt(unsigned int);
    void nextIntInclusive(int, int);
    void nextDouble(void);
    void nextUnsignedChar(void);
};
