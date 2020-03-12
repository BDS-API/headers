#pragma once

#include "../Command.h"


class ImmutableWorldCommand : Command {

public:
    ~ImmutableWorldCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    ImmutableWorldCommand();
};
