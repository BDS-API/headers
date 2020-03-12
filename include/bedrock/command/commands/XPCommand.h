#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class XPCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~XPCommand();
    XPCommand();
    void setup(CommandRegistry &);
};
