#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class AbilityCommand : Command {

public:
    virtual AbilityCommand::~AbilityCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    AbilityCommand(void);
};
