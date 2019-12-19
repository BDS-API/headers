#pragma once

class ExecuteCommand : Command {

public:
    virtual ExecuteCommand::~ExecuteCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ExecuteCommand(void);
};
