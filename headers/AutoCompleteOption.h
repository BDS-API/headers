#pragma once

class AutoCompleteOption {

public:

    void AutoCompleteOption(std::string const&, std::string const&, std::string const&, unsigned int, unsigned int, unsigned int, unsigned int);
    void AutoCompleteOption(AutoCompleteOption&&);
};
