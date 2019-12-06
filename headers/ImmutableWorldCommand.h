#pragma once

class ImmutableWorldCommand : Command {

public:
    virtual ~ImmutableWorldCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ImmutableWorldCommand(void);
};
