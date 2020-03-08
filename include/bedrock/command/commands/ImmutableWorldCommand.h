#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class ImmutableWorldCommand : Command {

public:
    virtual ImmutableWorldCommand::~ImmutableWorldCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ImmutableWorldCommand(void);
};
