#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class TestForBlockCommand : Command {

public:
    ~TestForBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    TestForBlockCommand();
    void setup(CommandRegistry &);
};
