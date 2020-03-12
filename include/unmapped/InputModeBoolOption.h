#pragma once

#include <string>
#include "Option.h"
#include <map>
#include <vector>
#include <memory>
#include <utility>


class InputModeBoolOption : Option {

public:
    ~InputModeBoolOption();
    virtual void load(std::string const&);
//  virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
//  void getDefault(InputMode)const; //TODO: incomplete function definition
//  void reset(InputMode); //TODO: incomplete function definition
//  void _saveForInputMode(std::vector<std::pair<std::string, std::string>> &, InputMode); //TODO: incomplete function definition
//  void set(InputMode, bool, bool); //TODO: incomplete function definition
//  InputModeBoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool); //TODO: incomplete function definition
//  void getValue(InputMode)const; //TODO: incomplete function definition
//  InputModeBoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool, bool, bool, bool); //TODO: incomplete function definition
};
