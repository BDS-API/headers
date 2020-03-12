#pragma once

#include "ServerCommand.h"


class ListCommand : ServerCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ListCommand();
    void setup(CommandRegistry &);
    ListCommand();
};
