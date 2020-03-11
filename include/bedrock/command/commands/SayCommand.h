#pragma once

#include "./MessagingCommand.h"
#include "../CommandRegistry.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class SayCommand : MessagingCommand {

public:
    virtual ~SayCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SayCommand();
};
