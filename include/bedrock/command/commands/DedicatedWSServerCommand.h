#pragma once

#include "../CommandRegistry.h"
#include "../../IMinecraftApp.h"
#include "../CommandOutput.h"
#include "../orgin/CommandOrigin.h"
#include "../Command.h"


class DedicatedWSServerCommand : Command {

public:
    static long mApp;

    virtual ~DedicatedWSServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, IMinecraftApp &);
    DedicatedWSServerCommand();
};
