#pragma once

#include <string>


namespace Crypto::Hash {

class HMAC {

public:

    void resultSize()const;
    void signAndAppend(std::string const&, std::string &, unsigned long);
    ~HMAC();
//  HMAC(Crypto::Hash::HashType, std::string const&, int); //TODO: incomplete function definition
    void resultSize()const;
    void signAndAppend(std::string const&, std::string &, unsigned long);
    ~HMAC();
//  HMAC(Crypto::Hash::HashType, std::string const&, int); //TODO: incomplete function definition
};

}