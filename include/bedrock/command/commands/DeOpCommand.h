#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class DeOpCommand : ServerCommand {

public:
    ~DeOpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    DeOpCommand();
    void setup(CommandRegistry &);
};
