#pragma once

class TestForBlocksCommand : Command {

public:
    virtual TestForBlocksCommand::~TestForBlocksCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TestForBlocksCommand(void);
};
