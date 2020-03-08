#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class TestForBlockCommand : Command {

public:
    TestForBlockCommand::~TestForBlockCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TestForBlockCommand(void);
};
