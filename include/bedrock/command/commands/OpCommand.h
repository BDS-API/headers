#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class OpCommand : ServerCommand {

public:
    ~OpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    OpCommand();
};
