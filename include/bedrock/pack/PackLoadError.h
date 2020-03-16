#pragma once

#include "PackError.h"
#include <string>
#include <vector>


class PackLoadError : public PackError {

public:
    virtual ~PackLoadError(); // _ZN13PackLoadErrorD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getLocErrorMessageMap()const; // _ZNK13PackLoadError21getLocErrorMessageMapB5cxx11Ev
    virtual std::string getEventErrorMessageMap()const; // _ZNK13PackLoadError23getEventErrorMessageMapB5cxx11Ev
    PackLoadError(); // _ZN13PackLoadErrorC2Ev
//    PackLoadError(long, std::vector<std::string> const&); //TODO: incomplete function definition // _ZN13PackLoadErrorC2E18PackParseErrorTypeRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS7_EE
    PackLoadError(PackLoadError const&); // _ZN13PackLoadErrorC2ERKS_
};
