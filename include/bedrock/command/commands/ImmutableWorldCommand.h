#pragma once

#include "../Command.h"


class ImmutableWorldCommand : Command {

public:
    ~ImmutableWorldCommand(); // _ZN21ImmutableWorldCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK21ImmutableWorldCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN21ImmutableWorldCommand5setupER15CommandRegistry
    ImmutableWorldCommand(); // _ZN21ImmutableWorldCommandC2Ev
};
