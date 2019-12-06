#pragma once

class MobEventCommand : Command {

public:
    virtual ~MobEventCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void MobEventCommand(void);
    void setup(CommandRegistry &, MobEventCommand::InitProxy &&);
};
