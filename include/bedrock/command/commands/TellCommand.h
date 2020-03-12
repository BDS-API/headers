#pragma once

#include "MessagingCommand.h"


class TellCommand : MessagingCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TellCommand();
    TellCommand();
    void setup(CommandRegistry &);
};
