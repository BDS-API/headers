#pragma once

#include "./Symbol.h"
#include "./ParseRule.h"
#include <memory>
#include <vector>
#include "./ParseToken.h"
#include <functional>
#include "../bedrock/command/CommandVersion.h"


namespace CommandRegistry {

class ParseRule {

public:

    ParseRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol, std::allocator<CommandRegistry::Symbol>> &&, std::function<CommandRegistry::ParseToken * (std::function &, CommandRegistry::Symbol)>, CommandVersion);
    ParseRule(CommandRegistry::ParseRule &&);
    ~ParseRule();
};

}