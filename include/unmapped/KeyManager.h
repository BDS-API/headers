#pragma once



class KeyManager {

public:
    virtual KeyManager::~KeyManager()
    virtual bool isValid()const;

    void getSystemType()const;
    KeyManager(std::string const&, Crypto::Asymmetric::System);
    void verify(std::string const&, std::string const&, Crypto::Hash::HashType)const;
};
