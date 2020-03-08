#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class ImmutableWorldCommand : Command {

public:
    ImmutableWorldCommand::~ImmutableWorldCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ImmutableWorldCommand(void);
};
