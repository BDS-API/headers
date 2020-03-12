#pragma once

#include "ServerCommand.h"


class SetMaxPlayersCommand : ServerCommand {

public:
    ~SetMaxPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    SetMaxPlayersCommand();
};
