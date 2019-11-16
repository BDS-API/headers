#pragma once

class WorldBuilderCommand : Command {

    virtual ~WorldBuilderCommand();
    virtual ~WorldBuilderCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
