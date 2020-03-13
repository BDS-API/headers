#pragma once

#include "../Command.h"


class SummonCommand : Command {

public:
    ~SummonCommand(); // _ZN13SummonCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK13SummonCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN13SummonCommand5setupER15CommandRegistry
    SummonCommand(); // _ZN13SummonCommandC2Ev
};
