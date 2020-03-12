#pragma once

#include "../Command.h"


class TestForCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TestForCommand();
    TestForCommand();
    void setup(CommandRegistry &);
};
