#pragma once

class CommandRegistry::ParseRule {

public:

    void ParseRule(CommandRegistry::Symbol, std::vector<CommandRegistry::Symbol, std::allocator<CommandRegistry::Symbol>> &&, std::function<CommandRegistry::ParseToken * ()(std::function&, CommandRegistry::Symbol)>, CommandVersion);
    void ParseRule(CommandRegistry::ParseRule&&);
};
