#pragma once

#include "../../IMinecraftApp.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class DedicatedWSServerCommand : Command {

public:
    static long mApp;

    ~DedicatedWSServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    DedicatedWSServerCommand();
    void setup(CommandRegistry &, IMinecraftApp &);
};
