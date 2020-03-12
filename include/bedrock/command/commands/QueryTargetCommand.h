#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class QueryTargetCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~QueryTargetCommand();
    void setup(CommandRegistry &);
    QueryTargetCommand();
};
