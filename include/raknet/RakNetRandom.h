#pragma once



namespace RakNet {

    class RakNetRandom {

    public:
        RakNetRandom(); // _ZN6RakNet12RakNetRandomC2Ev
        ~RakNetRandom(); // _ZN6RakNet12RakNetRandomD2Ev
        void SeedMT(unsigned int); // _ZN6RakNet12RakNetRandom6SeedMTEj
        void ReloadMT(); // _ZN6RakNet12RakNetRandom8ReloadMTEv
        void RandomMT(); // _ZN6RakNet12RakNetRandom8RandomMTEv
        void FrandomMT(); // _ZN6RakNet12RakNetRandom9FrandomMTEv
        void FillBufferMT(void *, unsigned int); // _ZN6RakNet12RakNetRandom12FillBufferMTEPvj
    };
}
