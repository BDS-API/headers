#pragma once

#include "../CommandRegistry.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class SummonCommand : Command {

public:
    virtual ~SummonCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SummonCommand();
};
