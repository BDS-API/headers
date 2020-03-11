#pragma once

#include <string>


class KeyManager {

public:
    virtual ~KeyManager();
    virtual bool isValid()const;

    void getSystemType()const;
//  KeyManager(std::string const&, Crypto::Asymmetric::System); //TODO: incomplete function definition
//  void verify(std::string const&, std::string const&, Crypto::Hash::HashType)const; //TODO: incomplete function definition
    std::string getPublicKey()const;
};
