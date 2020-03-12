#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class ListCommand : ServerCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ListCommand();
    ListCommand();
    void setup(CommandRegistry &);
};
