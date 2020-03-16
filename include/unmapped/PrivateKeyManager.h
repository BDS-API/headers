#pragma once

#include <string>
#include "KeyManager.h"


class PrivateKeyManager : public KeyManager {

public:
    virtual ~PrivateKeyManager(); // _ZN17PrivateKeyManagerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isValid()const; // _ZNK17PrivateKeyManager7isValidEv
//    PrivateKeyManager(long); //TODO: incomplete function definition // _ZN17PrivateKeyManagerC2EN6Crypto10Asymmetric6SystemE
//    PrivateKeyManager(std::string const&, std::string const&, long); //TODO: incomplete function definition // _ZN17PrivateKeyManagerC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_N6Crypto10Asymmetric6SystemE
//    void sign(std::string const&, long)const; //TODO: incomplete function definition // _ZNK17PrivateKeyManager4signERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN6Crypto4Hash8HashTypeE
    std::string computeSecret(KeyManager const&)const; // _ZNK17PrivateKeyManager13computeSecretB5cxx11ERK10KeyManager
};
