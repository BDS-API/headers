#pragma once

class SummonCommand : Command {

public:
    virtual SummonCommand::~SummonCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SummonCommand(void);
};
