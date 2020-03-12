#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "MessagingCommand.h"


class MeCommand : MessagingCommand {

public:
    ~MeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    MeCommand();
    void setup(CommandRegistry &);
};
