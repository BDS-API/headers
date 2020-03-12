#pragma once

#include "../../DedicatedServer.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class StopCommand : Command {

public:
    static long mServer;

    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~StopCommand();
    void setup(CommandRegistry &, DedicatedServer &);
    StopCommand();
};
