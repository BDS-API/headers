#pragma once

class QueryTargetCommand : Command {

public:
    virtual QueryTargetCommand::~QueryTargetCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    QueryTargetCommand(void);
};
