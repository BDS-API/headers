#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class KickCommand : ServerCommand {

public:
    ~KickCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    KickCommand();
};
