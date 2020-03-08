#pragma once

#include "orgin/CommandOrigin"


class CommandParameterData {

public:

    CommandParameterData(typeid_t<CommandRegistry>, bool (CommandRegistry::*)(void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string, std::allocator<std::string>> &)const, char const*, CommandParameterDataType, char const*, int, bool, int);
    CommandParameterData(CommandParameterData const&);
    void addOptions(CommandParameterOption);
    bool hasOption(CommandParameterOption)const;
};
