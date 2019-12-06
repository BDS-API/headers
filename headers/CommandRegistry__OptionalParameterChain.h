#pragma once

class CommandRegistry::OptionalParameterChain {

public:

    void OptionalParameterChain(int, int, CommandRegistry::Symbol);
    void OptionalParameterChain(CommandRegistry::OptionalParameterChain const&);
};
