#pragma once

#include "MessagingCommand.h"


class TitleCommand : MessagingCommand {

public:
    ~TitleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    TitleCommand();
};
