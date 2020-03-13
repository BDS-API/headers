#pragma once

#include "../Command.h"


class StopCommand : Command {

public:
    static long mServer;

    ~StopCommand(); // _ZN11StopCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11StopCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &, DedicatedServer &); // _ZN11StopCommand5setupER15CommandRegistryR15DedicatedServer
    StopCommand(); // _ZN11StopCommandC2Ev
};
