#pragma once

#include <utility>
#include "./Option.h"
#include <memory>
#include <vector>
#include <functional>
#include <string>


class BoolOption : Option {

public:
    virtual ~BoolOption();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

//  BoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool); //TODO: incomplete function definition
    void _set(bool, bool);
    void set(bool, bool);
    void setDefault(bool);
    void getDefault()const;
    void getValue()const;
    void setCoerceValueCallback(std::function<bool (bool)>);
    void toggle();
    void reset();
};
