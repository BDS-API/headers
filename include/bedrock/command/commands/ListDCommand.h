#pragma once

#include "ServerCommand.h"


class ListDCommand : ServerCommand {

public:
    ~ListDCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ListDCommand();
    void setup(CommandRegistry &);
};
