#pragma once

#include "../Command.h"


class TestForCommand : Command {

public:
    ~TestForCommand(); // _ZN14TestForCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14TestForCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14TestForCommand5setupER15CommandRegistry
    TestForCommand(); // _ZN14TestForCommandC2Ev
};
