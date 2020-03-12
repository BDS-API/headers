#pragma once



namespace RakNet {

    class RakNetRandom {

    public:
        void RandomMT();
        void ReloadMT();
        ~RakNetRandom();
        void FrandomMT();
        RakNetRandom();
        void SeedMT(unsigned int);
        void FillBufferMT(void *, unsigned int);
    };
}
