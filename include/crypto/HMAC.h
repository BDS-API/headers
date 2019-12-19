#pragma once

using namespace Crypto::Hash;

class HMAC {

public:

    void resultSize(void)const;
    void signAndAppend(std::string const&, std::string&, unsigned long);
    HMAC(Crypto::Hash::HashType, std::string const&, int);
    void resultSize(void)const;
    void signAndAppend(std::string const&, std::string&, unsigned long);
    HMAC(Crypto::Hash::HashType, std::string const&, int);
};
