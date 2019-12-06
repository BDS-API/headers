#pragma once

class WorldBuilderCommand : Command {

public:
    virtual ~WorldBuilderCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void WorldBuilderCommand(void);
};
