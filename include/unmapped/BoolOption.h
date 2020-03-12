#pragma once

#include <string>
#include "Option.h"
#include <vector>
#include <functional>


class BoolOption : Option {

public:
    virtual void load(std::string const&);
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    ~BoolOption();
    void _set(bool, bool);
    void toggle();
    void set(bool, bool);
    void reset();
    void setCoerceValueCallback(std::function<bool (bool)>);
    void setDefault(bool);
//  BoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    void getValue()const;
    void getDefault()const;
};
