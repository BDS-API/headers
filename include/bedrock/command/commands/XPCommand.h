#pragma once

#include "../Command.h"


class XPCommand : Command {

public:
    ~XPCommand(); // _ZN9XPCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK9XPCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN9XPCommand5setupER15CommandRegistry
    XPCommand(); // _ZN9XPCommandC2Ev
};
