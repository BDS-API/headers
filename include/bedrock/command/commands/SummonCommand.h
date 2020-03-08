#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class SummonCommand : Command {

public:
    SummonCommand::~SummonCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SummonCommand(void);
};
