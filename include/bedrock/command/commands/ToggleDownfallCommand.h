#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class ToggleDownfallCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ToggleDownfallCommand();
    ToggleDownfallCommand();
    void setup(CommandRegistry &);
};
