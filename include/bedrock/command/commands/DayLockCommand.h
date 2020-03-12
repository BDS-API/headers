#pragma once

#include "../Command.h"


class DayLockCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~DayLockCommand();
    void setup(CommandRegistry &);
    DayLockCommand();
};
