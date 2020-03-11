#pragma once

#include "../CommandRegistry.h"
#include "./ServerCommand.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class ListDCommand : ServerCommand {

public:
    virtual ~ListDCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ListDCommand();
};
