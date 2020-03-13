#pragma once

#include "../Command.h"


class AbilityCommand : Command {

public:
    ~AbilityCommand(); // _ZN14AbilityCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14AbilityCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14AbilityCommand5setupER15CommandRegistry
    AbilityCommand(); // _ZN14AbilityCommandC2Ev
};
