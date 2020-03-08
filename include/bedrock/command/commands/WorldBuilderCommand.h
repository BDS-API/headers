#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class WorldBuilderCommand : Command {

public:
    WorldBuilderCommand::~WorldBuilderCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    WorldBuilderCommand(void);
};
