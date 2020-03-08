#pragma once



using namespace Crypto::Symmetric;

class Symmetric {

public:

    Symmetric(Crypto::Symmetric::System, Crypto::Symmetric::OperationMode);
    void getBlockSize()const;
    void init(std::string const&, std::string const&);
    void decrypt(std::string const&, std::string&);
    void getKeySize()const;
    Symmetric(Crypto::Symmetric::System, Crypto::Symmetric::OperationMode);
    void getBlockSize()const;
    void init(std::string const&, std::string const&);
    void decrypt(std::string const&, std::string&);
    void getKeySize()const;
};
