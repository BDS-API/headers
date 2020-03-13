#pragma once

#include "../Command.h"


class ClearCommand : Command {

public:
    ~ClearCommand(); // _ZN12ClearCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK12ClearCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN12ClearCommand5setupER15CommandRegistry
    ClearCommand(); // _ZN12ClearCommandC2Ev
};
