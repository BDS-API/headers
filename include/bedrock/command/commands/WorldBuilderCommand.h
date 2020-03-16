#pragma once

#include "../Command.h"


class WorldBuilderCommand : public Command {

public:
    virtual ~WorldBuilderCommand(); // _ZN19WorldBuilderCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK19WorldBuilderCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN19WorldBuilderCommand5setupER15CommandRegistry
    WorldBuilderCommand(); // _ZN19WorldBuilderCommandC2Ev
};
