#pragma once

#include "../Command.h"


class DedicatedWSServerCommand : Command {

public:
    static long mApp;

    ~DedicatedWSServerCommand(); // _ZN24DedicatedWSServerCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK24DedicatedWSServerCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &, IMinecraftApp &); // _ZN24DedicatedWSServerCommand5setupER15CommandRegistryR13IMinecraftApp
    DedicatedWSServerCommand(); // _ZN24DedicatedWSServerCommandC2Ev
};
