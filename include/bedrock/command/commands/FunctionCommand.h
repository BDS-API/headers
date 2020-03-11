#pragma once

#include "../CommandRegistry.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class FunctionCommand : Command {

public:
    virtual ~FunctionCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    FunctionCommand();
    void setup(CommandRegistry &);
};
