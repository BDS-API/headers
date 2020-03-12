#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class ReplaceItemCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ReplaceItemCommand();
    void setup(CommandRegistry &);
    ReplaceItemCommand();
};
