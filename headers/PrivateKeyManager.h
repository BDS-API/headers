#pragma once

class PrivateKeyManager : KeyManager {

public:
    virtual ~PrivateKeyManager();
    virtual bool isValid(void)const;

    void PrivateKeyManager(Crypto::Asymmetric::System);
    void PrivateKeyManager(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Crypto::Asymmetric::System);
    void sign(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Crypto::Hash::HashType)const;
};
