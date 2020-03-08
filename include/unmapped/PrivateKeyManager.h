#pragma once



class PrivateKeyManager : KeyManager {

public:
    virtual PrivateKeyManager::~PrivateKeyManager()
    virtual bool isValid()const;

    PrivateKeyManager(Crypto::Asymmetric::System);
    PrivateKeyManager(std::string const&, std::string const&, Crypto::Asymmetric::System);
    void sign(std::string const&, Crypto::Hash::HashType)const;
};
