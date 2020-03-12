#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "MessagingCommand.h"


class TellRawCommand : MessagingCommand {

public:
    ~TellRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    TellRawCommand();
};
