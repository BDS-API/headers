#pragma once

#include "../Command.h"


class ToggleDownfallCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ToggleDownfallCommand();
    void setup(CommandRegistry &);
    ToggleDownfallCommand();
};
