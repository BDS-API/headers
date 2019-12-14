#pragma once

class CommandRegistry::Signature {

public:

    void Signature(std::string const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag);
    void Signature(CommandRegistry::Signature&&);
};
