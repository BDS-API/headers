#pragma once

#include "../Command.h"


class StopCommand : Command {

public:
    static long mServer;

    ~StopCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    StopCommand();
    void setup(CommandRegistry &, DedicatedServer &);
};
