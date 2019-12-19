#pragma once

class StopCommand : Command {

public:
    static long mServer;

    virtual ~StopCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, DedicatedServer &);
    void StopCommand(void);
};
