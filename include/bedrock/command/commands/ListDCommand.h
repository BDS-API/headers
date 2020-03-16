#pragma once

#include "ServerCommand.h"


class ListDCommand : public ServerCommand {

public:
    virtual ~ListDCommand(); // _ZN12ListDCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK12ListDCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN12ListDCommand5setupER15CommandRegistry
    ListDCommand(); // _ZN12ListDCommandC2Ev
};
