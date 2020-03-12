#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "MessagingCommand.h"


class SayCommand : MessagingCommand {

public:
    ~SayCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    SayCommand();
    void setup(CommandRegistry &);
};
