#pragma once

#include "../Command.h"


class GiveCommand : public Command {

public:
    virtual ~GiveCommand(); // _ZN11GiveCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11GiveCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11GiveCommand5setupER15CommandRegistry
    GiveCommand(); // _ZN11GiveCommandC2Ev
};
