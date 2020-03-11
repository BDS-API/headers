#pragma once

#include <utility>
#include "./Option.h"
#include <memory>
#include <vector>
#include <functional>
#include <string>


class StringOption : Option {

public:
    virtual ~StringOption();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

//  StringOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, std::string const&); //TODO: incomplete function definition
    void set(std::string const&, bool);
    std::string getValue()const;
    std::string getDefault()const;
    void setCoerceValueCallback(std::function<std::string (std::string const&)>);
    void reset();
};
