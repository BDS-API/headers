#pragma once

#include "../orgin/CommandOrigin"
#include "../../IMinecraftApp"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class DedicatedWSServerCommand : Command {

public:
    static long mApp;

    DedicatedWSServerCommand::~DedicatedWSServerCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, IMinecraftApp &);
    DedicatedWSServerCommand(void);
};
