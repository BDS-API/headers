#pragma once

class Crypto::Hash::HMAC {

public:

    void resultSize(void)const;
    void signAndAppend(std::string const&, std::string&, unsigned long);
    void HMAC(Crypto::Hash::HashType, std::string const&, int);
    void resultSize(void)const;
    void signAndAppend(std::string const&, std::string&, unsigned long);
    void HMAC(Crypto::Hash::HashType, std::string const&, int);
};
