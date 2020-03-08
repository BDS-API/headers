#pragma once

#include "../orgin/CommandOrigin"
#include "../../DedicatedServer"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class StopCommand : Command {

public:
    static long mServer;

    StopCommand::~StopCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, DedicatedServer &);
    StopCommand(void);
};
