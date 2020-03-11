#pragma once

#include <utility>
#include "./Option.h"
#include <memory>
#include <vector>
#include <functional>
#include <string>


class IntOption : Option {

public:
    virtual ~IntOption();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

//  IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int, std::allocator<int>> const&, bool); //TODO: incomplete function definition
    void _validate(int);
//  IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, bool, int, int); //TODO: incomplete function definition
    void set(int, bool);
    void getValue()const;
    void getDefault()const;
    void getValues()const;
    void setCoerceSaveValueCallback(std::function<int (int)>);
    void reset();
};
