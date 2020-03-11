#pragma once

#include "./MessagingCommand.h"
#include "../CommandRegistry.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class TellCommand : MessagingCommand {

public:
    virtual ~TellCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TellCommand();
};
