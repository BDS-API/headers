#pragma once



namespace RakNet {

    class uint24_t {

    public:
        void operator<(RakNet::uint24_t const&)const; // _ZNK6RakNet8uint24_tltERKS0_
        void operator==(RakNet::uint24_t const&)const; // _ZNK6RakNet8uint24_teqERKS0_
        uint24_t(); // _ZN6RakNet8uint24_tC2Ev
        uint24_t(RakNet::uint24_t const&); // _ZN6RakNet8uint24_tC2ERKS0_
        void operator>(RakNet::uint24_t const&)const; // _ZNK6RakNet8uint24_tgtERKS0_
        uint24_t(unsigned int const&); // _ZN6RakNet8uint24_tC2ERKj
        void operator-(unsigned int const&)const; // _ZNK6RakNet8uint24_tmiERKj
        void operator-(RakNet::uint24_t const&)const; // _ZNK6RakNet8uint24_tmiERKS0_
        void operator/(RakNet::uint24_t const&)const; // _ZNK6RakNet8uint24_tdvERKS0_
        void operator+(RakNet::uint24_t const&)const; // _ZNK6RakNet8uint24_tplERKS0_
        void operator+(unsigned int const&)const; // _ZNK6RakNet8uint24_tplERKj
        void operator--(int); // _ZN6RakNet8uint24_tmmEi
        void operator!=(RakNet::uint24_t const&)const; // _ZNK6RakNet8uint24_tneERKS0_
    };
}
