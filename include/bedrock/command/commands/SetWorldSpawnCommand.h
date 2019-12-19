#pragma once

class SetWorldSpawnCommand : Command {

public:
    virtual SetWorldSpawnCommand::~SetWorldSpawnCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetWorldSpawnCommand(void);
};
