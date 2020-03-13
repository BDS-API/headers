#pragma once

#include <string>
#include "DefintionDescription.h"


class IdentifierDescription : DefintionDescription {

public:
    ~IdentifierDescription(); // _ZN21IdentifierDescriptionD2Ev
    virtual void getJsonName()const; // _ZNK21IdentifierDescription11getJsonNameEv
    IdentifierDescription(std::string const&); // _ZN21IdentifierDescriptionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    IdentifierDescription(char const*); // _ZN21IdentifierDescriptionC2EPKc
    IdentifierDescription(IdentifierDescription &&); // _ZN21IdentifierDescriptionC2EOS_
};
