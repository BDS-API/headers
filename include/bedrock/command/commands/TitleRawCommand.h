#pragma once

#include "MessagingCommand.h"


class TitleRawCommand : MessagingCommand {

public:
    ~TitleRawCommand(); // _ZN15TitleRawCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15TitleRawCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN15TitleRawCommand5setupER15CommandRegistry
    TitleRawCommand(); // _ZN15TitleRawCommandC2Ev
};
