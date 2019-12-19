#pragma once

class DayLockCommand : Command {

public:
    virtual DayLockCommand::~DayLockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    DayLockCommand(void);
};
