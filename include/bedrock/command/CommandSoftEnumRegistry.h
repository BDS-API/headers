#pragma once

#include "./CommandRegistry.h"
#include <memory>
#include <vector>
#include <string>


class CommandSoftEnumRegistry {

public:

    CommandSoftEnumRegistry(CommandRegistry *);
    CommandSoftEnumRegistry();
    ~CommandSoftEnumRegistry();
//  void updateSoftEnum(SoftEnumUpdateType, std::string const&, std::vector<std::string, std::allocator<std::string>>); //TODO: incomplete function definition
    bool isValid()const;
};
