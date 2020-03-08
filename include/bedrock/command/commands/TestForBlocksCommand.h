#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class TestForBlocksCommand : Command {

public:
    TestForBlocksCommand::~TestForBlocksCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TestForBlocksCommand(void);
};
