#pragma once

class TestForCommand : Command {

public:
    virtual ~TestForCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TestForCommand(void);
};
