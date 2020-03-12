#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class ImmutableWorldCommand : Command {

public:
    ~ImmutableWorldCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ImmutableWorldCommand();
    void setup(CommandRegistry &);
};
