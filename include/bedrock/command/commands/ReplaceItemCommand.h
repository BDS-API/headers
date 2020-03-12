#pragma once

#include "../Command.h"


class ReplaceItemCommand : Command {

public:
    ~ReplaceItemCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ReplaceItemCommand();
    void setup(CommandRegistry &);
};
