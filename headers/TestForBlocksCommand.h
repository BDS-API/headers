#pragma once

class TestForBlocksCommand : Command {

public:
    virtual ~TestForBlocksCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TestForBlocksCommand(void);
};
