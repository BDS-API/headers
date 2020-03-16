#pragma once

#include "../Command.h"


class ImmutableWorldCommand : public Command {

public:
    virtual ~ImmutableWorldCommand(); // _ZN21ImmutableWorldCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK21ImmutableWorldCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN21ImmutableWorldCommand5setupER15CommandRegistry
    ImmutableWorldCommand(); // _ZN21ImmutableWorldCommandC2Ev
};
