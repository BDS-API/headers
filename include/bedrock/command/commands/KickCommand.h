#pragma once

#include "../CommandRegistry.h"
#include "./ServerCommand.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class KickCommand : ServerCommand {

public:
    virtual ~KickCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    KickCommand();
};
