#pragma once

class TestForCommand : Command {

public:
    virtual TestForCommand::~TestForCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TestForCommand(void);
};
