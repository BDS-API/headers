#pragma once

class CommandRegistry::SoftEnum {

public:

    void SoftEnum(std::string const&, std::vector<std::string, std::allocator<std::string>>);
    void SoftEnum(CommandRegistry::SoftEnum&&);
};
