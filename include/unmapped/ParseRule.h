#pragma once

#include "../bedrock/command/Symbol"
#include "../bedrock/command/CommandVersion"


using namespace CommandRegistry;

class ParseRule {

public:

    ParseRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol, std::allocator<CommandRegistry::Symbol>> &&, std::function<CommandRegistry::ParseToken * ()(std::function&, CommandRegistry::Symbol)>, CommandVersion);
    ParseRule(CommandRegistry::ParseRule&&);
};
