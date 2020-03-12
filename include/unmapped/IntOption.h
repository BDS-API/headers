#pragma once

#include <string>
#include "Option.h"
#include <functional>
#include <vector>
#include <utility>


class IntOption : Option {

public:
    ~IntOption();
    virtual void load(std::string const&);
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    void getDefault()const;
    void set(int, bool);
//  IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int> const&, bool); //TODO: incomplete function definition
    void getValue()const;
    void getValues()const;
    void _validate(int);
    void setCoerceSaveValueCallback(std::function<int (int)>);
    void reset();
//  IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, bool, int, int); //TODO: incomplete function definition
};
