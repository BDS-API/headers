#pragma once

#include "./MessagingCommand.h"
#include "../CommandRegistry.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class TitleCommand : MessagingCommand {

public:
    virtual ~TitleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TitleCommand();
};
