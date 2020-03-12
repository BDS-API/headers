#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class SetMaxPlayersCommand : ServerCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~SetMaxPlayersCommand();
    SetMaxPlayersCommand();
    void setup(CommandRegistry &);
};
