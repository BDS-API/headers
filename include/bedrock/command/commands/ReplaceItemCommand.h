#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class ReplaceItemCommand : Command {

public:
    virtual ReplaceItemCommand::~ReplaceItemCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ReplaceItemCommand(void);
};
