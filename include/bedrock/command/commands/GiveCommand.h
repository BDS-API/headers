#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class GiveCommand : Command {

public:
    ~GiveCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    GiveCommand();
};
