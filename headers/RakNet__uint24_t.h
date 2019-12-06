#pragma once

class RakNet::uint24_t {

public:

    void uint24_t(void);
    void uint24_t(RakNet::uint24_t const&);
    void uint24_t(unsigned int const&);
    void operator-(unsigned int const&)const;
    void operator-(RakNet::uint24_t const&)const;
    void operator--(int);
};
