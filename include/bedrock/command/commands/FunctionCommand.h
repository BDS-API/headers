#pragma once

#include "../Command.h"


class FunctionCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~FunctionCommand();
    FunctionCommand();
    void setup(CommandRegistry &);
};
