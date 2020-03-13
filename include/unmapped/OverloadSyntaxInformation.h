#pragma once

#include <string>


class OverloadSyntaxInformation {

public:
    ~OverloadSyntaxInformation(); // _ZN25OverloadSyntaxInformationD2Ev
    OverloadSyntaxInformation(OverloadSyntaxInformation &&); // _ZN25OverloadSyntaxInformationC2EOS_
    OverloadSyntaxInformation(std::string const&, unsigned int, unsigned int); // _ZN25OverloadSyntaxInformationC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjj
};
