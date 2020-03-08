#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class FunctionCommand : Command {

public:
    virtual FunctionCommand::~FunctionCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    FunctionCommand(void);
    void setup(CommandRegistry &);
};
