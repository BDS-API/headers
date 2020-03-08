#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class TestForBlocksCommand : Command {

public:
    virtual TestForBlocksCommand::~TestForBlocksCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TestForBlocksCommand(void);
};
