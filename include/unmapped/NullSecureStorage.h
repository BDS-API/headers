#pragma once

#include <string>
#include "SecureStorage.h"


class NullSecureStorage : SecureStorage {

public:
    ~NullSecureStorage(); // _ZN17NullSecureStorageD2Ev
    virtual void add(std::string const&, std::string const&); // _ZN17NullSecureStorage3addERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void addOrUpdate(std::string const&, std::string const&); // _ZN17NullSecureStorage11addOrUpdateERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void remove(std::string const&); // _ZN17NullSecureStorage6removeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void get(std::string const&, std::string &); // _ZN17NullSecureStorage3getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS5_
    NullSecureStorage(); // _ZN17NullSecureStorageC2Ev
};
