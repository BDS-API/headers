#pragma once

class ReplaceItemCommand : Command {

public:
    virtual ReplaceItemCommand::~ReplaceItemCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ReplaceItemCommand(void);
};
