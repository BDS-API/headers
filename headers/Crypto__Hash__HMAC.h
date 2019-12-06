#pragma once

class Crypto::Hash::HMAC {

public:

    void resultSize(void)const;
    void signAndAppend(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&, unsigned long);
    void HMAC(Crypto::Hash::HashType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void resultSize(void)const;
    void signAndAppend(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&, unsigned long);
    void HMAC(Crypto::Hash::HashType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
