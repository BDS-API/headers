#pragma once

class ClearCommand : Command {

public:
    virtual ClearCommand::~ClearCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ClearCommand(void);
};
