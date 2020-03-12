#pragma once

#include "MessagingCommand.h"


class MeCommand : MessagingCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~MeCommand();
    MeCommand();
    void setup(CommandRegistry &);
};
