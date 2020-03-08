#pragma once

#include "../bedrock/command/CommandVersion"
#include "../bedrock/command/Command"


using namespace CommandRegistry;

class Overload {

public:

    Overload(CommandRegistry::Overload&&);
    Overload(CommandVersion, std::unique_ptr<Command, std::default_delete<Command>> (*)(void));
};
