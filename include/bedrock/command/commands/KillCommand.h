#pragma once

class KillCommand : Command {

public:
    virtual KillCommand::~KillCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    KillCommand(void);
};
