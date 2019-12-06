#pragma once

class ExecuteCommand : Command {

public:
    virtual ~ExecuteCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ExecuteCommand(void);
};
