#pragma once

#include "../bedrock/command/Symbol"


using namespace CommandRegistry;

class ParseToken {

public:

    ParseToken(CommandRegistry::Symbol, CommandRegistry::ParseToken*);
};
