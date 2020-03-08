#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class ReplaceItemCommand : Command {

public:
    virtual ReplaceItemCommand::~ReplaceItemCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ReplaceItemCommand(void);
};
