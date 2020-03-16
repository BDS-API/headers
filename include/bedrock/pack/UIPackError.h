#pragma once

#include <string>
#include <vector>
#include "PackError.h"


class UIPackError : public PackError {

public:
    virtual ~UIPackError(); // _ZN11UIPackErrorD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getLocErrorMessageMap()const; // _ZNK11UIPackError21getLocErrorMessageMapB5cxx11Ev
    virtual std::string getEventErrorMessageMap()const; // _ZNK11UIPackError23getEventErrorMessageMapB5cxx11Ev
    UIPackError(); // _ZN11UIPackErrorC2Ev
//    UIPackError(long, std::vector<std::string> const&); //TODO: incomplete function definition // _ZN11UIPackErrorC2E15UIPackErrorTypeRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS7_EE
};
