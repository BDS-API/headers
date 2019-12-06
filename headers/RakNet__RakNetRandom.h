#pragma once

class RakNet::RakNetRandom {

public:

    void RakNetRandom(void);
    void SeedMT(unsigned int);
    void ReloadMT(void);
    void RandomMT(void);
    void FrandomMT(void);
    void FillBufferMT(void *, unsigned int);
};
