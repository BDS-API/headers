#pragma once



using namespace RakNet;

class RakNetRandom {

public:

    RakNetRandom(void);
    void SeedMT(unsigned int);
    void ReloadMT();
    void RandomMT();
    void FrandomMT();
    void FillBufferMT(void *, unsigned int);
};
