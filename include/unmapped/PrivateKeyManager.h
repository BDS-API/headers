#pragma once

#include <string>
#include "KeyManager.h"


class PrivateKeyManager : KeyManager {

public:
    virtual bool isValid()const;
    ~PrivateKeyManager();
//  PrivateKeyManager(Crypto::Asymmetric::System); //TODO: incomplete function definition
//  PrivateKeyManager(std::string const&, std::string const&, Crypto::Asymmetric::System); //TODO: incomplete function definition
//  void sign(std::string const&, Crypto::Hash::HashType)const; //TODO: incomplete function definition
    std::string computeSecret(KeyManager const&)const;
};
