#pragma once

#include "ServerCommand.h"


class DeOpCommand : ServerCommand {

public:
    ~DeOpCommand(); // _ZN11DeOpCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11DeOpCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11DeOpCommand5setupER15CommandRegistry
    DeOpCommand(); // _ZN11DeOpCommandC2Ev
};
