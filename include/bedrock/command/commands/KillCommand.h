#pragma once

#include "../Command.h"


class KillCommand : public Command {

public:
    virtual ~KillCommand(); // _ZN11KillCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11KillCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11KillCommand5setupER15CommandRegistry
    KillCommand(); // _ZN11KillCommandC2Ev
};
