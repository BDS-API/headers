#pragma once

#include "../Command.h"


class XPCommand : public Command {

public:
    virtual ~XPCommand(); // _ZN9XPCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK9XPCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN9XPCommand5setupER15CommandRegistry
    XPCommand(); // _ZN9XPCommandC2Ev
};
