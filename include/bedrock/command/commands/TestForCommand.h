#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class TestForCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TestForCommand();
    void setup(CommandRegistry &);
    TestForCommand();
};
