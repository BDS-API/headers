#pragma once

#include "../bedrock/command/Command.h"
#include "./Overload.h"
#include <memory>
#include "../bedrock/command/CommandVersion.h"


namespace CommandRegistry {

class Overload {

public:

    Overload(CommandRegistry::Overload &&);
    ~Overload();
//  Overload(CommandVersion, std::unique_ptr<Command, std::default_delete<Command>> ((void), ); //TODO: incomplete function definition
};

}