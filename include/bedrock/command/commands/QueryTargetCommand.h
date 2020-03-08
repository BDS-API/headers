#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class QueryTargetCommand : Command {

public:
    QueryTargetCommand::~QueryTargetCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    QueryTargetCommand(void);
};
