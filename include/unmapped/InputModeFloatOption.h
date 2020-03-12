#pragma once

#include <string>
#include <vector>
#include <map>
#include "Option.h"


class InputModeFloatOption : Option {

public:
    virtual void load(std::string const&);
    ~InputModeFloatOption();
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
//  void _saveForInputMode(std::vector<std::pair<std::string, std::string>> &, InputMode); //TODO: incomplete function definition
//  InputModeFloatOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, float, float, float); //TODO: incomplete function definition
//  void set(InputMode, float, bool); //TODO: incomplete function definition
//  void getDefault(InputMode)const; //TODO: incomplete function definition
//  void reset(InputMode); //TODO: incomplete function definition
//  void getValue(InputMode)const; //TODO: incomplete function definition
};
