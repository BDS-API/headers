#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class TestForBlockCommand : Command {

public:
    virtual TestForBlockCommand::~TestForBlockCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TestForBlockCommand(void);
};
