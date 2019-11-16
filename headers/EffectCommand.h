#pragma once

class EffectCommand : Command {

    virtual ~EffectCommand();
    virtual ~EffectCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
