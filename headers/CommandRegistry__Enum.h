#pragma once

class CommandRegistry::Enum {

public:

    void Enum(std::string const&, typeid_t<CommandRegistry>, bool (CommandRegistry::*)(void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string, std::allocator<std::string>> &)const);
    void Enum(CommandRegistry::Enum&&);
};
