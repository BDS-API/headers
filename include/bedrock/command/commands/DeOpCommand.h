#pragma once

#include "ServerCommand.h"


class DeOpCommand : public ServerCommand {

public:
    virtual ~DeOpCommand(); // _ZN11DeOpCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11DeOpCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11DeOpCommand5setupER15CommandRegistry
    DeOpCommand(); // _ZN11DeOpCommandC2Ev
};
