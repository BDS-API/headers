#pragma once

#include "../Command.h"


class DedicatedWSServerCommand : Command {

public:
    static long mApp;

    ~DedicatedWSServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &, IMinecraftApp &);
    DedicatedWSServerCommand();
};
