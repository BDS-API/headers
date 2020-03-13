#pragma once

#include "../Command.h"


class SetWorldSpawnCommand : Command {

public:
    ~SetWorldSpawnCommand(); // _ZN20SetWorldSpawnCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK20SetWorldSpawnCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN20SetWorldSpawnCommand5setupER15CommandRegistry
    SetWorldSpawnCommand(); // _ZN20SetWorldSpawnCommandC2Ev
};
