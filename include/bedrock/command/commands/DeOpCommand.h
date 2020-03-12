#pragma once

#include "ServerCommand.h"


class DeOpCommand : ServerCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~DeOpCommand();
    void setup(CommandRegistry &);
    DeOpCommand();
};
