#pragma once

using namespace RakNet;

class RakNetRandom {

public:

    RakNetRandom(void);
    void SeedMT(unsigned int);
    void ReloadMT(void);
    void RandomMT(void);
    void FrandomMT(void);
    void FillBufferMT(void *, unsigned int);
};
