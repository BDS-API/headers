#pragma once

#include "Option.h"
#include <vector>
#include <string>
#include <utility>


class FloatOption : Option {

public:
    virtual void load(std::string const&);
    ~FloatOption();
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    void getDefault()const;
//  FloatOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, float, float, float); //TODO: incomplete function definition
    void set(float, bool);
    void getValue()const;
    void reset();
};
