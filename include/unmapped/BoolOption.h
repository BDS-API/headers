#pragma once

#include <string>
#include "Option.h"
#include <functional>
#include <vector>
#include <utility>


class BoolOption : Option {

public:
    virtual void load(std::string const&);
    ~BoolOption();
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    void _set(bool, bool);
    void toggle();
    void reset();
    void setCoerceValueCallback(std::function<bool (bool)>);
    void getDefault()const;
//  BoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    void setDefault(bool);
    void getValue()const;
    void set(bool, bool);
};
