#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class TestForBlockCommand : Command {

public:
    virtual TestForBlockCommand::~TestForBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TestForBlockCommand(void);
};
