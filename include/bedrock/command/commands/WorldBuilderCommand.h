#pragma once

#include "../Command.h"


class WorldBuilderCommand : Command {

public:
    ~WorldBuilderCommand(); // _ZN19WorldBuilderCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK19WorldBuilderCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN19WorldBuilderCommand5setupER15CommandRegistry
    WorldBuilderCommand(); // _ZN19WorldBuilderCommandC2Ev
};
