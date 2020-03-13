#pragma once

#include <string>


class StringKey {

public:
    StringKey(std::string const&); // _ZN9StringKeyC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ~StringKey(); // _ZN9StringKeyD2Ev
    StringKey(StringKey &&); // _ZN9StringKeyC2EOS_
    StringKey(HashedString const&); // _ZN9StringKeyC2ERK12HashedString
    StringKey(); // _ZN9StringKeyC2Ev
    StringKey(StringKey const&); // _ZN9StringKeyC2ERKS_
    void operator==(StringKey const&)const; // _ZNK9StringKeyeqERKS_
};
