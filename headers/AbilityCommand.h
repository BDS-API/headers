#pragma once

class AbilityCommand : Command {

public:
    virtual ~AbilityCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void AbilityCommand(void);
};
