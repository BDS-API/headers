#pragma once

#include <string>
#include <vector>
#include "Option.h"


class FloatOption : Option {

public:
    virtual void load(std::string const&);
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    ~FloatOption();
    void reset();
//  FloatOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, float, float, float); //TODO: incomplete function definition
    void getDefault()const;
    void set(float, bool);
    void getValue()const;
};
