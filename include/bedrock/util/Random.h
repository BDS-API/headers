#pragma once



class Random {

public:
    static long mThreadLocalRandom;

    void nextInt(int, int);
    void nextFloat(float, float);
    Random();
    void nextIntInclusive(int, int);
    void nextGaussianInt(int);
    void nextVec3();
    void operator()();
    void nextFloat(float);
    Random(Random const&);
    void nextGaussianFloat();
    void nextUnsignedInt(unsigned int);
    void nextGaussian();
    Random(unsigned int);
    void setSeed(unsigned int);
    void nextDouble();
    void min();
    void max();
    void getSeed()const;
    void getThreadLocal();
    void nextBoolean();
    void operator()(int);
    void nextInt();
    void nextUnsignedChar();
    void nextGaussianVec3();
    void nextInt(int);
    void nextFloat();
};
