#pragma once

#include <string>
#include "Option.h"
#include <vector>
#include <functional>


class StringOption : Option {

public:
    virtual void load(std::string const&);
    ~StringOption();
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    void setCoerceValueCallback(std::function<std::string (std::string const&)>);
    std::string getValue()const;
    void reset();
//  StringOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, std::string const&); //TODO: incomplete function definition
    void set(std::string const&, bool);
    std::string getDefault()const;
};
