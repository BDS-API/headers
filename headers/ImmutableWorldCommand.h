#pragma once

class ImmutableWorldCommand : Command {

    virtual ~ImmutableWorldCommand();
    virtual ~ImmutableWorldCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
