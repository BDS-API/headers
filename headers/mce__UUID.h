#pragma once

class mce::UUID {

public:

    void UUID(void);
    void getMostSignificantBits(void)const;
    void getLeastSignificantBits(void)const;
    void getHash(void)const;
    void UUID(unsigned long, unsigned long);
    void fromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void seedFromString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isEmpty(void)const;
};
