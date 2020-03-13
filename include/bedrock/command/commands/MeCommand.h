#pragma once

#include "MessagingCommand.h"


class MeCommand : MessagingCommand {

public:
    ~MeCommand(); // _ZN9MeCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK9MeCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN9MeCommand5setupER15CommandRegistry
    MeCommand(); // _ZN9MeCommandC2Ev
};
