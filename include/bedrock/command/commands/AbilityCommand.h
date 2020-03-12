#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class AbilityCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~AbilityCommand();
    AbilityCommand();
    void setup(CommandRegistry &);
};
