#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class TestForBlocksCommand : Command {

public:
    virtual TestForBlocksCommand::~TestForBlocksCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TestForBlocksCommand(void);
};
