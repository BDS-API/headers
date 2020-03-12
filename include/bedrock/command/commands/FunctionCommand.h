#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class FunctionCommand : Command {

public:
    ~FunctionCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    FunctionCommand();
    void setup(CommandRegistry &);
};
