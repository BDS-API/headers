#pragma once

#include "../Command.h"


class TestForBlockCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TestForBlockCommand();
    TestForBlockCommand();
    void setup(CommandRegistry &);
};
