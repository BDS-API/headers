#pragma once

class QueryTargetCommand : Command {

public:
    virtual ~QueryTargetCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void QueryTargetCommand(void);
};
