#pragma once

#include "../CommandRegistry.h"
#include "./ServerCommand.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class SetMaxPlayersCommand : ServerCommand {

public:
    virtual ~SetMaxPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SetMaxPlayersCommand();
};
