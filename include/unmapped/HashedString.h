#pragma once

#include <string>


class HashedString {

public:
    static long defaultErrorValue;

    ~HashedString(); // _ZN12HashedStringD2Ev
    HashedString(); // _ZN12HashedStringC2Ev
    void getEmptyString(); // _ZN12HashedString14getEmptyStringEv
    void operator==(HashedString const&)const; // _ZNK12HashedStringeqERKS_
    void operator!=(HashedString const&)const; // _ZNK12HashedStringneERKS_
    void operator<(HashedString const&)const; // _ZNK12HashedStringltERKS_
    HashedString(HashedString const&); // _ZN12HashedStringC2ERKS_
    HashedString(HashedString &&); // _ZN12HashedStringC2EOS_
//  HashedString(decltype(nullptr); //TODO: incomplete function definition // _ZN12HashedStringC2EDn
    void computeHash(char const*); // _ZN12HashedString11computeHashEPKc
    void computeHash(std::string const&); // _ZN12HashedString11computeHashERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    HashedString(char const*); // _ZN12HashedStringC2EPKc
    HashedString(std::string const&); // _ZN12HashedStringC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    HashedString(unsigned long, char const*); // _ZN12HashedStringC2EmPKc
    HashedString(unsigned long, std::string); // _ZN12HashedStringC2EmNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isEmpty()const; // _ZNK12HashedString7isEmptyEv
    void empty()const; // _ZNK12HashedString5emptyEv
    void clear(); // _ZN12HashedString5clearEv
    void getHash()const; // _ZNK12HashedString7getHashEv
    std::string getString()const; // _ZNK12HashedString9getStringB5cxx11Ev
    void c_str()const; // _ZNK12HashedString5c_strEv
};
