#pragma once

class Crypto::Hash {

public:

    void hash(Crypto::Hash::HashType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void generateUUID(void const*, unsigned int, Crypto::Hash::HashType);
    void hash(Crypto::Hash::HashType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void generateUUID(void const*, unsigned int, Crypto::Hash::HashType);
};
