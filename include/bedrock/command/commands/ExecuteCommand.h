#pragma once

#include "../Command.h"


class ExecuteCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ExecuteCommand();
    void setup(CommandRegistry &);
    ExecuteCommand();
};
