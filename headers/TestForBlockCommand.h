#pragma once

class TestForBlockCommand : Command {

public:
    virtual ~TestForBlockCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TestForBlockCommand(void);
};
