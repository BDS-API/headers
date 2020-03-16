#pragma once

#include <string>


class SavedData {

public:
    virtual ~SavedData(); // _ZN9SavedDataD2Ev
    virtual void __fake_function0(); // fake
    SavedData(std::string const&); // _ZN9SavedDataC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setDirty(bool); // _ZN9SavedData8setDirtyEb
    bool isDirty()const; // _ZNK9SavedData7isDirtyEv
    std::string getId()const; // _ZNK9SavedData5getIdB5cxx11Ev
};
