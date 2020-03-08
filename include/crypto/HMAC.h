#pragma once



using namespace Crypto::Hash;

class HMAC {

public:

    void resultSize()const;
    void signAndAppend(std::string const&, std::string&, unsigned long);
    HMAC(Crypto::Hash::HashType, std::string const&, int);
    void resultSize()const;
    void signAndAppend(std::string const&, std::string&, unsigned long);
    HMAC(Crypto::Hash::HashType, std::string const&, int);
};
