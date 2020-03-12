#pragma once



class Random {

public:
    static long mThreadLocalRandom;

    void nextFloat(float);
    Random();
    void nextBoolean();
    void nextVec3();
    void getSeed()const;
    void nextGaussianInt(int);
    void nextFloat();
    Random(Random const&);
    void nextInt(int, int);
    void max();
    void nextGaussianFloat();
    void nextIntInclusive(int, int);
    void nextInt(int);
    void setSeed(unsigned int);
    void nextUnsignedChar();
    void nextGaussianVec3();
    void nextInt();
    void nextGaussian();
    void operator()(int);
    void nextDouble();
    void getThreadLocal();
    Random(unsigned int);
    void nextFloat(float, float);
    void operator()();
    void min();
    void nextUnsignedInt(unsigned int);
};
