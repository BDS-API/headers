#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class EffectCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~EffectCommand();
    void setup(CommandRegistry &);
    EffectCommand();
    void clear(CommandOrigin const&, CommandOutput &)const;
};
