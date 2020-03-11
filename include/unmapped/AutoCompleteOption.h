#pragma once

#include "./AutoCompleteOption.h"
#include <string>


class AutoCompleteOption {

public:

    ~AutoCompleteOption();
    AutoCompleteOption(std::string const&, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, unsigned int);
    AutoCompleteOption(AutoCompleteOption &&);
};
