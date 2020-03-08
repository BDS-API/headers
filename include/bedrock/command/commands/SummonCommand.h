#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class SummonCommand : Command {

public:
    virtual SummonCommand::~SummonCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SummonCommand(void);
};
