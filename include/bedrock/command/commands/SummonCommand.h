#pragma once

#include "../Command.h"


class SummonCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~SummonCommand();
    SummonCommand();
    void setup(CommandRegistry &);
};
