#pragma once

class FillCommand : Command {

public:
    virtual ~FillCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void FillCommand(void);
};
