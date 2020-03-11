#pragma once

#include "../CommandRegistry.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class EffectCommand : Command {

public:
    virtual ~EffectCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    EffectCommand();
    void clear(CommandOrigin const&, CommandOutput &)const;
};
