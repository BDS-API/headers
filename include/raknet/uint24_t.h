#pragma once



namespace RakNet {

    class uint24_t {

    public:
        void operator--(int);
        void operator!=(RakNet::uint24_t const&)const;
        void operator==(RakNet::uint24_t const&)const;
        uint24_t(RakNet::uint24_t const&);
        void operator<(RakNet::uint24_t const&)const;
        void operator-(unsigned int const&)const;
        void operator>(RakNet::uint24_t const&)const;
        void operator+(RakNet::uint24_t const&)const;
        void operator+(unsigned int const&)const;
        void operator/(RakNet::uint24_t const&)const;
        uint24_t(unsigned int const&);
        void operator-(RakNet::uint24_t const&)const;
        uint24_t();
    };
}
