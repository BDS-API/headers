#pragma once

class CommandSoftEnumRegistry {

public:

    void CommandSoftEnumRegistry(CommandRegistry *);
    void CommandSoftEnumRegistry(void);
    void updateSoftEnum(SoftEnumUpdateType, std::string const&, std::vector<std::string, std::allocator<std::string>>);
    bool isValid(void)const;
};
