#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class WorldBuilderCommand : Command {

public:
    virtual WorldBuilderCommand::~WorldBuilderCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    WorldBuilderCommand(void);
};
