#pragma once

#include "../Command.h"


class TestForBlockCommand : Command {

public:
    ~TestForBlockCommand(); // _ZN19TestForBlockCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK19TestForBlockCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN19TestForBlockCommand5setupER15CommandRegistry
    TestForBlockCommand(); // _ZN19TestForBlockCommandC2Ev
};
