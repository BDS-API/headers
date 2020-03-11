#pragma once

#include "./MessagingCommand.h"
#include "../CommandRegistry.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class MeCommand : MessagingCommand {

public:
    virtual ~MeCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    MeCommand();
};
