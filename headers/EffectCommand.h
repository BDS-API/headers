#pragma once

class EffectCommand : Command {

public:
    virtual ~EffectCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void EffectCommand(void);
    void clear(CommandOrigin const&, CommandOutput &)const;
};
