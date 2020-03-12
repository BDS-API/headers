#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class ListDCommand : ServerCommand {

public:
    ~ListDCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    ListDCommand();
};
