#pragma once

#include <utility>
#include "./Option.h"
#include <memory>
#include <vector>
#include <string>


class FloatOption : Option {

public:
    virtual ~FloatOption();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

//  FloatOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, float, float, float); //TODO: incomplete function definition
    void set(float, bool);
    void getValue()const;
    void getDefault()const;
    void reset();
};
