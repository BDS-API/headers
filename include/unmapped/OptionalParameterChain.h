#pragma once

#include "../bedrock/command/OptionalParameterChain"
#include "../bedrock/command/Symbol"


using namespace CommandRegistry;

class OptionalParameterChain {

public:

    OptionalParameterChain(int, int, CommandRegistry::Symbol);
    OptionalParameterChain(CommandRegistry::OptionalParameterChain const&);
};
