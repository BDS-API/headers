#pragma once

#include "CommandRegistry.h"
#include <vector>
#include <string>


class CommandSoftEnumRegistry {

public:
    CommandSoftEnumRegistry();
    bool isValid()const;
    ~CommandSoftEnumRegistry();
    CommandSoftEnumRegistry(CommandRegistry *);
//  void updateSoftEnum(SoftEnumUpdateType, std::string const&, std::vector<std::string>); //TODO: incomplete function definition
};
