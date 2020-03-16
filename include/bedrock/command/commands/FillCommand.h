#pragma once

#include "../Command.h"


class FillCommand : public Command {

public:
    virtual ~FillCommand(); // _ZN11FillCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11FillCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11FillCommand5setupER15CommandRegistry
    FillCommand(); // _ZN11FillCommandC2Ev
};
