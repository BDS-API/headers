#pragma once

#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "../orgin/CommandOrigin.h"
#include "../../DedicatedServer.h"
#include "../Command.h"


class StopCommand : Command {

public:
    static long mServer;

    virtual ~StopCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, DedicatedServer &);
    StopCommand();
};
