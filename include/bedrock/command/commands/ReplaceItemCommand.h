#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class ReplaceItemCommand : Command {

public:
    ReplaceItemCommand::~ReplaceItemCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ReplaceItemCommand(void);
};
