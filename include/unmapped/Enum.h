#pragma once

#include "../bedrock/command/CommandRegistry.h"
#include <memory>
#include "../bedrock/command/orgin/CommandOrigin.h"
#include "./Enum.h"
#include <vector>
#include "./ParseToken.h"
#include <string>


namespace CommandRegistry {

class Enum {

public:

//  Enum(std::string const&, typeid_t<CommandRegistry>, bool (mmandRegistry:: *), (void *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string, std::allocator<std::string>> &); //TODO: incomplete function definition
    Enum(CommandRegistry::Enum &&);
    ~Enum();
};

}