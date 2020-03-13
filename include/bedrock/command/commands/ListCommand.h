#pragma once

#include "ServerCommand.h"


class ListCommand : ServerCommand {

public:
    ~ListCommand(); // _ZN11ListCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11ListCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11ListCommand5setupER15CommandRegistry
    ListCommand(); // _ZN11ListCommandC2Ev
};
