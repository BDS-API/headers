#pragma once

#include "MessagingCommand.h"


class SayCommand : MessagingCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~SayCommand();
    void setup(CommandRegistry &);
    SayCommand();
};
