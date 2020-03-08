#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class FunctionCommand : Command {

public:
    FunctionCommand::~FunctionCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    FunctionCommand(void);
    void setup(CommandRegistry &);
};
