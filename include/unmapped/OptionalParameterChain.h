#pragma once

using namespace CommandRegistry;

class OptionalParameterChain {

public:

    OptionalParameterChain(int, int, CommandRegistry::Symbol);
    OptionalParameterChain(CommandRegistry::OptionalParameterChain const&);
};
