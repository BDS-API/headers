#pragma once

#include "../Command.h"


class QueryTargetCommand : Command {

public:
    ~QueryTargetCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    QueryTargetCommand();
    void setup(CommandRegistry &);
};
