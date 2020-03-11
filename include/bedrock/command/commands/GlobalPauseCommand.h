#pragma once

#include "../CommandRegistry.h"
#include "./ServerCommand.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class GlobalPauseCommand : ServerCommand {

public:
    virtual ~GlobalPauseCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GlobalPauseCommand();
};
