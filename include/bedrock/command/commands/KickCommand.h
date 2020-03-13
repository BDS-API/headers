#pragma once

#include "ServerCommand.h"


class KickCommand : ServerCommand {

public:
    ~KickCommand(); // _ZN11KickCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11KickCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11KickCommand5setupER15CommandRegistry
    KickCommand(); // _ZN11KickCommandC2Ev
};
