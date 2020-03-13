#pragma once

#include "../Command.h"


class QueryTargetCommand : Command {

public:
    ~QueryTargetCommand(); // _ZN18QueryTargetCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK18QueryTargetCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN18QueryTargetCommand5setupER15CommandRegistry
    QueryTargetCommand(); // _ZN18QueryTargetCommandC2Ev
};
