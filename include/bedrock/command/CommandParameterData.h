#pragma once

#include <string>
#include <vector>


class CommandParameterData {

public:
    ~CommandParameterData();
//  void addOptions(CommandParameterOption); //TODO: incomplete function definition
//  CommandParameterData(typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition
    CommandParameterData(CommandParameterData const&);
//  bool hasOption(CommandParameterOption)const; //TODO: incomplete function definition
};
