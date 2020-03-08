#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class QueryTargetCommand : Command {

public:
    virtual QueryTargetCommand::~QueryTargetCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    QueryTargetCommand(void);
};
