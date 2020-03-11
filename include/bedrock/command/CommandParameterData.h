#pragma once

#include "./CommandParameterData.h"
#include "./CommandRegistry.h"
#include <memory>
#include <vector>
#include "../../unmapped/ParseToken.h"
#include "orgin/CommandOrigin.h"
#include <string>


class CommandParameterData {

public:

    ~CommandParameterData();
//  CommandParameterData(typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string, std::allocator<std::string>> &); //TODO: incomplete function definition
    CommandParameterData(CommandParameterData const&);
//  void addOptions(CommandParameterOption); //TODO: incomplete function definition
//  bool hasOption(CommandParameterOption)const; //TODO: incomplete function definition
};
