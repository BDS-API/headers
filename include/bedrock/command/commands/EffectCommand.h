#pragma once

#include "../Command.h"


class EffectCommand : Command {

public:
    ~EffectCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    EffectCommand();
    void setup(CommandRegistry &);
    void clear(CommandOrigin const&, CommandOutput &)const;
};
