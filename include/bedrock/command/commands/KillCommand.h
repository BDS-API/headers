#pragma once

#include "../Command.h"


class KillCommand : Command {

public:
    ~KillCommand(); // _ZN11KillCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11KillCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11KillCommand5setupER15CommandRegistry
    KillCommand(); // _ZN11KillCommandC2Ev
};
