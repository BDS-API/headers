#pragma once

#include "../Command.h"


class SetBlockCommand : Command {

public:
    ~SetBlockCommand(); // _ZN15SetBlockCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15SetBlockCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN15SetBlockCommand5setupER15CommandRegistry
    SetBlockCommand(); // _ZN15SetBlockCommandC2Ev
};
