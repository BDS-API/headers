#pragma once

class SummonCommand : Command {

public:
    virtual ~SummonCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void SummonCommand(void);
};
