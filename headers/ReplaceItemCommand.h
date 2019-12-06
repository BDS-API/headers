#pragma once

class ReplaceItemCommand : Command {

public:
    virtual ~ReplaceItemCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ReplaceItemCommand(void);
};
