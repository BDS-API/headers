#pragma once

class SetWorldSpawnCommand : Command {

public:
    virtual ~SetWorldSpawnCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void SetWorldSpawnCommand(void);
};
