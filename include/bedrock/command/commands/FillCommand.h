#pragma once

class FillCommand : Command {

public:
    virtual FillCommand::~FillCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    FillCommand(void);
};
