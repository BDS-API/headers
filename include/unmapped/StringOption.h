#pragma once

#include <string>
#include "Option.h"
#include <functional>
#include <vector>
#include <utility>


class StringOption : Option {

public:
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    ~StringOption();
    virtual void load(std::string const&);
    void reset();
    void set(std::string const&, bool);
    std::string getValue()const;
//  StringOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, std::string const&); //TODO: incomplete function definition
    void setCoerceValueCallback(std::function<std::string (std::string const&)>);
    std::string getDefault()const;
};
