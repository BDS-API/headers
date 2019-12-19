#pragma once

class MobEventCommand : Command {

public:
    virtual MobEventCommand::~MobEventCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    MobEventCommand(void);
    void setup(CommandRegistry &, MobEventCommand::InitProxy &&);
};
