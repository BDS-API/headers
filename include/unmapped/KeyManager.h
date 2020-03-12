#pragma once

#include <string>


class KeyManager {

public:
    virtual bool isValid()const;
    ~KeyManager();
    std::string getPublicKey()const;
//  KeyManager(std::string const&, Crypto::Asymmetric::System); //TODO: incomplete function definition
//  void verify(std::string const&, std::string const&, Crypto::Hash::HashType)const; //TODO: incomplete function definition
    void getSystemType()const;
};
