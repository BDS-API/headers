#pragma once

class KeyManager {

public:
    virtual ~KeyManager();
    virtual bool isValid(void)const;

    void getSystemType(void)const;
    void KeyManager(std::string const&, Crypto::Asymmetric::System);
    void verify(std::string const&, std::string const&, Crypto::Hash::HashType)const;
};
