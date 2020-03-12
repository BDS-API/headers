#pragma once

#include "origin/CommandOrigin.h"
#include "CommandRegistry.h"
#include <vector>
#include <string>


class CommandParameterData {

public:
    CommandParameterData(CommandParameterData const&);
//  void addOptions(CommandParameterOption); //TODO: incomplete function definition
    ~CommandParameterData();
//  CommandParameterData(typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition
//  bool hasOption(CommandParameterOption)const; //TODO: incomplete function definition
};
