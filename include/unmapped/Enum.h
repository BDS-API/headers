#pragma once

#include "../bedrock/command/CommandRegistry"
#include "../bedrock/command/ParseToken"
#include "../bedrock/command/orgin/CommandOrigin"


using namespace CommandRegistry;

class Enum {

public:

    Enum(std::string const&, typeid_t<CommandRegistry>, bool (CommandRegistry::*)(void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string, std::allocator<std::string>> &)const);
    Enum(CommandRegistry::Enum&&);
};
