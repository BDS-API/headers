#pragma once

#include "../Command.h"


class TimeCommand : public Command {

public:
    virtual ~TimeCommand(); // _ZN11TimeCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11TimeCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11TimeCommand5setupER15CommandRegistry
    TimeCommand(); // _ZN11TimeCommandC2Ev
};
