#pragma once

#include "../bedrock/command/CommandFlag"
#include "../bedrock/command/Symbol"


using namespace CommandRegistry;

class Signature {

public:

    Signature(std::string const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag);
    Signature(CommandRegistry::Signature&&);
};
