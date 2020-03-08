#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class ImmutableWorldCommand : Command {

public:
    virtual ImmutableWorldCommand::~ImmutableWorldCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ImmutableWorldCommand(void);
};
