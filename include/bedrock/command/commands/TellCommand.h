#pragma once

#include "MessagingCommand.h"


class TellCommand : public MessagingCommand {

public:
    virtual ~TellCommand(); // _ZN11TellCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11TellCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN11TellCommand5setupER15CommandRegistry
    TellCommand(); // _ZN11TellCommandC2Ev
};
