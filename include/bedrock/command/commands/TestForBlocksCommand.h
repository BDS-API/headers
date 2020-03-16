#pragma once

#include "../Command.h"


class TestForBlocksCommand : public Command {

public:
    virtual ~TestForBlocksCommand(); // _ZN20TestForBlocksCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK20TestForBlocksCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN20TestForBlocksCommand5setupER15CommandRegistry
    TestForBlocksCommand(); // _ZN20TestForBlocksCommandC2Ev
};
