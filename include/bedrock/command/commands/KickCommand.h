#pragma once

#include "ServerCommand.h"


class KickCommand : ServerCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~KickCommand();
    void setup(CommandRegistry &);
    KickCommand();
};
