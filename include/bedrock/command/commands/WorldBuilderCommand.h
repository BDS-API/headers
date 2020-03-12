#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class WorldBuilderCommand : Command {

public:
    ~WorldBuilderCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    WorldBuilderCommand();
    void setup(CommandRegistry &);
};
