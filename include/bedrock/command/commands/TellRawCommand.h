#pragma once

#include "MessagingCommand.h"


class TellRawCommand : MessagingCommand {

public:
    ~TellRawCommand(); // _ZN14TellRawCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK14TellRawCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN14TellRawCommand5setupER15CommandRegistry
    TellRawCommand(); // _ZN14TellRawCommandC2Ev
};
