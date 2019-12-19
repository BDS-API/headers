#pragma once

class FunctionCommand : Command {

public:
    virtual FunctionCommand::~FunctionCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    FunctionCommand(void);
    void setup(CommandRegistry &);
};
