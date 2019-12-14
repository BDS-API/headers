#pragma once

class PrivateKeyManager : KeyManager {

public:
    virtual ~PrivateKeyManager();
    virtual bool isValid(void)const;

    void PrivateKeyManager(Crypto::Asymmetric::System);
    void PrivateKeyManager(std::string const&, std::string const&, Crypto::Asymmetric::System);
    void sign(std::string const&, Crypto::Hash::HashType)const;
};
