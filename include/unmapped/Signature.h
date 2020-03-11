#pragma once

#include "./Symbol.h"
#include "../bedrock/command/CommandFlag.h"
#include "./Signature.h"
#include <string>


namespace CommandRegistry {

class Signature {

public:

//  Signature(std::string const&, char const*, CommandPermissionLevel, CommandRegistry::Symbol, CommandFlag); //TODO: incomplete function definition
    ~Signature();
    Signature(CommandRegistry::Signature &&);
};

}