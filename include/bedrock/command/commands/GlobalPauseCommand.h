#pragma once

#include "ServerCommand.h"


class GlobalPauseCommand : ServerCommand {

public:
    ~GlobalPauseCommand(); // _ZN18GlobalPauseCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK18GlobalPauseCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN18GlobalPauseCommand5setupER15CommandRegistry
    GlobalPauseCommand(); // _ZN18GlobalPauseCommandC2Ev
};
