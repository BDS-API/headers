#pragma once



using namespace RakNet;

class uint24_t {

public:

    uint24_t(void);
    uint24_t(RakNet::uint24_t const&);
    uint24_t(unsigned int const&);
    void operator-(unsigned int const&)const;
    void operator-(RakNet::uint24_t const&)const;
    void operator--(int);
};
