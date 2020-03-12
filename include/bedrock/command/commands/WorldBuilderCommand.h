#pragma once

#include "../Command.h"


class WorldBuilderCommand : Command {

public:
    ~WorldBuilderCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    WorldBuilderCommand();
    void setup(CommandRegistry &);
};
