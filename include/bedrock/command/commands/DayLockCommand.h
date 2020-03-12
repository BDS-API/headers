#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class DayLockCommand : Command {

public:
    ~DayLockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    DayLockCommand();
    void setup(CommandRegistry &);
};
