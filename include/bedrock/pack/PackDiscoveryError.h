#pragma once

#include "PackError.h"
#include <string>
#include <vector>


class PackDiscoveryError : public PackError {

public:
    virtual ~PackDiscoveryError(); // _ZN18PackDiscoveryErrorD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getLocErrorMessageMap()const; // _ZNK18PackDiscoveryError21getLocErrorMessageMapB5cxx11Ev
    virtual std::string getEventErrorMessageMap()const; // _ZNK18PackDiscoveryError23getEventErrorMessageMapB5cxx11Ev
    PackDiscoveryError(PackDiscoveryError const&); // _ZN18PackDiscoveryErrorC2ERKS_
    PackDiscoveryError(); // _ZN18PackDiscoveryErrorC2Ev
//    PackDiscoveryError(long, std::vector<std::string> const&); //TODO: incomplete function definition // _ZN18PackDiscoveryErrorC2E18PackParseErrorTypeRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS7_EE
};
