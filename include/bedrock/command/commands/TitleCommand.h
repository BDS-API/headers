#pragma once

#include "MessagingCommand.h"


class TitleCommand : MessagingCommand {

public:
    ~TitleCommand(); // _ZN12TitleCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK12TitleCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN12TitleCommand5setupER15CommandRegistry
    TitleCommand(); // _ZN12TitleCommandC2Ev
};
