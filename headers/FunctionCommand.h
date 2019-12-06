#pragma once

class FunctionCommand : Command {

public:
    virtual ~FunctionCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void FunctionCommand(void);
    void setup(CommandRegistry &);
};
