#pragma once

#include "./Symbol.h"
#include "./OptionalParameterChain.h"


namespace CommandRegistry {

class OptionalParameterChain {

public:

    OptionalParameterChain(int, int, CommandRegistry::Symbol);
    OptionalParameterChain(CommandRegistry::OptionalParameterChain const&);
};

}