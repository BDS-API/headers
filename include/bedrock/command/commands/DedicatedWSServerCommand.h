#pragma once

#include "../Command.h"


class DedicatedWSServerCommand : public Command {

public:
    static long mApp;

    virtual ~DedicatedWSServerCommand(); // _ZN24DedicatedWSServerCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK24DedicatedWSServerCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &, IMinecraftApp &); // _ZN24DedicatedWSServerCommand5setupER15CommandRegistryR13IMinecraftApp
    DedicatedWSServerCommand(); // _ZN24DedicatedWSServerCommandC2Ev
};
