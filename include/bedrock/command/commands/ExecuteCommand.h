#pragma once

#include "../Command.h"


class ExecuteCommand : Command {

public:
    ~ExecuteCommand(); // _ZN14ExecuteCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14ExecuteCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14ExecuteCommand5setupER15CommandRegistry
    ExecuteCommand(); // _ZN14ExecuteCommandC2Ev
};
