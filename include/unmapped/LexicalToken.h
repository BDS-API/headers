#pragma once

#include "./Symbol.h"
#include "../bedrock/command/CommandRegistry.h"


namespace CommandRegistry {

class LexicalToken {

public:

    LexicalToken(CommandRegistry const&);
    void operator==(CommandRegistry::Symbol const&)const;
    void operator!=(CommandRegistry::Symbol const&)const;
};

}