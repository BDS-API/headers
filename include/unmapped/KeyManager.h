#pragma once

#include <string>


class KeyManager {

public:
    virtual ~KeyManager(); // _ZN10KeyManagerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isValid()const; // _ZNK10KeyManager7isValidEv
    void getSystemType()const; // _ZNK10KeyManager13getSystemTypeEv
//    KeyManager(std::string const&, long); //TODO: incomplete function definition // _ZN10KeyManagerC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN6Crypto10Asymmetric6SystemE
//    void verify(std::string const&, std::string const&, long)const; //TODO: incomplete function definition // _ZNK10KeyManager6verifyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_N6Crypto4Hash8HashTypeE
    std::string getPublicKey()const; // _ZNK10KeyManager12getPublicKeyB5cxx11Ev
};
