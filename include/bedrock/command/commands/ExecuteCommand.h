#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class ExecuteCommand : Command {

public:
    virtual ExecuteCommand::~ExecuteCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ExecuteCommand(void);
};
