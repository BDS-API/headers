#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class DedicatedWSServerCommand : Command {

public:
    static long mApp;

    virtual DedicatedWSServerCommand::~DedicatedWSServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, IMinecraftApp &);
    DedicatedWSServerCommand(void);
};
