#pragma once

#include "ServerCommand.h"


class OpCommand : ServerCommand {

public:
    ~OpCommand(); // _ZN9OpCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK9OpCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN9OpCommand5setupER15CommandRegistry
    OpCommand(); // _ZN9OpCommandC2Ev
};
