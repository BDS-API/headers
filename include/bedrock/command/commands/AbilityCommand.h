#pragma once

#include "../Command.h"


class AbilityCommand : Command {

public:
    ~AbilityCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    AbilityCommand();
    void setup(CommandRegistry &);
};
