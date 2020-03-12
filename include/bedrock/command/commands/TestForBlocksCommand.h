#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class TestForBlocksCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TestForBlocksCommand();
    TestForBlocksCommand();
    void setup(CommandRegistry &);
};
