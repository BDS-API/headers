#pragma once

#include "ServerCommand.h"


class GlobalPauseCommand : ServerCommand {

public:
    ~GlobalPauseCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    GlobalPauseCommand();
};
