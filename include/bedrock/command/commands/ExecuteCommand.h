#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class ExecuteCommand : Command {

public:
    ~ExecuteCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ExecuteCommand();
    void setup(CommandRegistry &);
};
