#pragma once

class SetBlockCommand : Command {

public:
    virtual SetBlockCommand::~SetBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetBlockCommand(void);
};
