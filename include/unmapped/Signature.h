#pragma once



using namespace CommandRegistry;

class Signature {

public:

    Signature(std::string const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag);
    Signature(CommandRegistry::Signature&&);
};
