#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class TimeCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TimeCommand();
    TimeCommand();
    void setup(CommandRegistry &);
};
