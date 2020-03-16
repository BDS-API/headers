#pragma once

#include "../Command.h"


class TestForCommand : public Command {

public:
    virtual ~TestForCommand(); // _ZN14TestForCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14TestForCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14TestForCommand5setupER15CommandRegistry
    TestForCommand(); // _ZN14TestForCommandC2Ev
};
