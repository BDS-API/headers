#pragma once

#include <string>


class AutoCompleteOption {

public:
    ~AutoCompleteOption(); // _ZN18AutoCompleteOptionD2Ev
    AutoCompleteOption(std::string const&, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, unsigned int); // _ZN18AutoCompleteOptionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_jjjj
    AutoCompleteOption(AutoCompleteOption &&); // _ZN18AutoCompleteOptionC2EOS_
};
