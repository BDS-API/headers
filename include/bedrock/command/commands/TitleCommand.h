#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "MessagingCommand.h"


class TitleCommand : MessagingCommand {

public:
    ~TitleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    TitleCommand();
    void setup(CommandRegistry &);
};
