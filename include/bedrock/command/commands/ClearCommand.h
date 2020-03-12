#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class ClearCommand : Command {

public:
    ~ClearCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    ClearCommand();
};
