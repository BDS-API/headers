#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class WorldBuilderCommand : Command {

public:
    virtual WorldBuilderCommand::~WorldBuilderCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    WorldBuilderCommand(void);
};
