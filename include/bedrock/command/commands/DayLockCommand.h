#pragma once

#include "../Command.h"


class DayLockCommand : Command {

public:
    ~DayLockCommand(); // _ZN14DayLockCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14DayLockCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14DayLockCommand5setupER15CommandRegistry
    DayLockCommand(); // _ZN14DayLockCommandC2Ev
};
