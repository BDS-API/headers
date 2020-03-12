#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class SetBlockCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~SetBlockCommand();
    SetBlockCommand();
    void setup(CommandRegistry &);
};
