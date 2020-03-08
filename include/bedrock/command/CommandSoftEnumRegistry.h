#pragma once



class CommandSoftEnumRegistry {

public:

    CommandSoftEnumRegistry(CommandRegistry *);
    CommandSoftEnumRegistry(void);
    void updateSoftEnum(SoftEnumUpdateType, std::string const&, std::vector<std::string, std::allocator<std::string>>);
    bool isValid()const;
};
