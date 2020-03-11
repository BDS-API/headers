#pragma once



namespace RakNet {

class RakNetRandom {

public:

    RakNetRandom();
    ~RakNetRandom();
    void SeedMT(unsigned int);
    void ReloadMT();
    void RandomMT();
    void FrandomMT();
//  void FillBufferMT(void *, unsigned int); //TODO: incomplete function definition
};

}