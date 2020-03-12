#pragma once

#include <string>
#include "Option.h"
#include <vector>
#include <functional>


class IntOption : Option {

public:
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    virtual void load(std::string const&);
    ~IntOption();
    void getValue()const;
    void _validate(int);
    void getDefault()const;
    void set(int, bool);
    void getValues()const;
//  IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, bool, int, int); //TODO: incomplete function definition
    void reset();
    void setCoerceSaveValueCallback(std::function<int (int)>);
//  IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int> const&, bool); //TODO: incomplete function definition
};
