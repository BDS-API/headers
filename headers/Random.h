#pragma once

class Random {

public:
    static long mThreadLocalRandom;


    void nextInt(int);
    void nextFloat(void);
    void Random(Random const&);
    void nextBoolean(void);
    void nextFloat(float);
    void Random(unsigned int);
    void setSeed(unsigned int);
    void nextInt(void);
    void Random(void);
    void nextInt(int, int);
    void nextGaussianInt(int);
    void getSeed(void)const;
    void nextGaussianFloat(void);
    void max(void);
    void min(void);
    void operator()(void);
    void nextFloat(float, float);
    void nextGaussianVec3(void);
    void nextGaussian(void);
    void nextVec3(void);
    void getThreadLocal(void);
    void nextUnsignedInt(unsigned int);
    void nextIntInclusive(int, int);
    void operator()(int);
    void nextDouble(void);
    void nextUnsignedChar(void);
};
