#pragma once

#include "../CommandRegistry.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class GiveCommand : Command {

public:
    virtual ~GiveCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GiveCommand();
};
