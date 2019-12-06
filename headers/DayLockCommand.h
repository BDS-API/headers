#pragma once

class DayLockCommand : Command {

public:
    virtual ~DayLockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void DayLockCommand(void);
};
