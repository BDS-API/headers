#pragma once

#include "../Command.h"


class ClearCommand : public Command {

public:
    virtual ~ClearCommand(); // _ZN12ClearCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK12ClearCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN12ClearCommand5setupER15CommandRegistry
    ClearCommand(); // _ZN12ClearCommandC2Ev
};
