#pragma once



namespace RakNet {

    class RakNetRandom {

    public:
        void FrandomMT();
        ~RakNetRandom();
        void FillBufferMT(void *, unsigned int);
        void RandomMT();
        void SeedMT(unsigned int);
        void ReloadMT();
        RakNetRandom();
    };
}
