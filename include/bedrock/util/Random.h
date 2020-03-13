#pragma once



class Random {

public:
    static long mThreadLocalRandom;

    void nextInt(int); // _ZN6Random7nextIntEi
    void nextFloat(); // _ZN6Random9nextFloatEv
    Random(Random const&); // _ZN6RandomC2ERKS_
    void nextBoolean(); // _ZN6Random11nextBooleanEv
    void nextFloat(float); // _ZN6Random9nextFloatEf
    Random(unsigned int); // _ZN6RandomC2Ej
    void setSeed(unsigned int); // _ZN6Random7setSeedEj
    void nextInt(); // _ZN6Random7nextIntEv
    Random(); // _ZN6RandomC2Ev
    void nextInt(int, int); // _ZN6Random7nextIntEii
    void nextGaussianInt(int); // _ZN6Random15nextGaussianIntEi
    void getSeed()const; // _ZNK6Random7getSeedEv
    void nextGaussianFloat(); // _ZN6Random17nextGaussianFloatEv
    void max(); // _ZN6Random3maxEv
    void min(); // _ZN6Random3minEv
    void operator()(); // _ZN6RandomclEv
    void nextFloat(float, float); // _ZN6Random9nextFloatEff
    void nextGaussianVec3(); // _ZN6Random16nextGaussianVec3Ev
    void nextGaussian(); // _ZN6Random12nextGaussianEv
    void nextVec3(); // _ZN6Random8nextVec3Ev
    void getThreadLocal(); // _ZN6Random14getThreadLocalEv
    void nextUnsignedInt(unsigned int); // _ZN6Random15nextUnsignedIntEj
    void nextIntInclusive(int, int); // _ZN6Random16nextIntInclusiveEii
    void operator()(int); // _ZN6RandomclEi
    void nextDouble(); // _ZN6Random10nextDoubleEv
    void nextUnsignedChar(); // _ZN6Random16nextUnsignedCharEv
};
