#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class SummonCommand : Command {

public:
    ~SummonCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    SummonCommand();
    void setup(CommandRegistry &);
};
