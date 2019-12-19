#pragma once

class StopCommand : Command {

public:
    static long mServer;

    virtual StopCommand::~StopCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, DedicatedServer &);
    StopCommand(void);
};
