#pragma once

#include "../Command.h"


class ToggleDownfallCommand : Command {

public:
    ~ToggleDownfallCommand(); // _ZN21ToggleDownfallCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK21ToggleDownfallCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN21ToggleDownfallCommand5setupER15CommandRegistry
    ToggleDownfallCommand(); // _ZN21ToggleDownfallCommandC2Ev
};
