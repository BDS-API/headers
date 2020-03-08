#pragma once

#include "../bedrock/command/Symbol"
#include "../bedrock/command/CommandFlag"


using namespace CommandRegistry;

class Signature {

public:

    Signature(std::string const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag);
    Signature(CommandRegistry::Signature&&);
};
