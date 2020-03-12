#pragma once

#include <string>
#include <vector>


class CommandSoftEnumRegistry {

public:
    ~CommandSoftEnumRegistry();
//  void updateSoftEnum(SoftEnumUpdateType, std::string const&, std::vector<std::string>); //TODO: incomplete function definition
    bool isValid()const;
    CommandSoftEnumRegistry(CommandRegistry *);
    CommandSoftEnumRegistry();
};
