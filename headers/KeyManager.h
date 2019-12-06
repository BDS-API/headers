#pragma once

class KeyManager {

public:
    virtual ~KeyManager();
    virtual bool isValid(void)const;

    void getSystemType(void)const;
    void KeyManager(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Crypto::Asymmetric::System);
    void verify(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Crypto::Hash::HashType)const;
};
