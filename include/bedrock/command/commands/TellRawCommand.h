#pragma once

#include "MessagingCommand.h"


class TellRawCommand : MessagingCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TellRawCommand();
    void setup(CommandRegistry &);
    TellRawCommand();
};
