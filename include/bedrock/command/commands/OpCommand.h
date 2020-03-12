#pragma once

#include "ServerCommand.h"


class OpCommand : ServerCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~OpCommand();
    OpCommand();
    void setup(CommandRegistry &);
};
