#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class ExecuteCommand : Command {

public:
    virtual ExecuteCommand::~ExecuteCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ExecuteCommand(void);
};
