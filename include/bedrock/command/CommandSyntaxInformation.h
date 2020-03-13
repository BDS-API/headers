#pragma once

#include <string>
#include <vector>


class CommandSyntaxInformation {

public:
    ~CommandSyntaxInformation(); // _ZN24CommandSyntaxInformationD2Ev
    CommandSyntaxInformation(); // _ZN24CommandSyntaxInformationC2Ev
    CommandSyntaxInformation(bool, std::string const&, std::vector<OverloadSyntaxInformation> &&); // _ZN24CommandSyntaxInformationC2EbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEOSt6vectorI25OverloadSyntaxInformationSaIS9_EE
};
