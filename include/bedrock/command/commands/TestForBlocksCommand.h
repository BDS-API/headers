#pragma once

#include "../Command.h"


class TestForBlocksCommand : Command {

public:
    ~TestForBlocksCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    TestForBlocksCommand();
};
