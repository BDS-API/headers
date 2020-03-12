#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "MessagingCommand.h"


class TitleRawCommand : MessagingCommand {

public:
    ~TitleRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    TitleRawCommand();
    void setup(CommandRegistry &);
};
