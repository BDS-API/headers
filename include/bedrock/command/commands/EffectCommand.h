#pragma once

#include "../Command.h"


class EffectCommand : Command {

public:
    ~EffectCommand(); // _ZN13EffectCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK13EffectCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN13EffectCommand5setupER15CommandRegistry
    EffectCommand(); // _ZN13EffectCommandC2Ev
    void clear(CommandOrigin const&, CommandOutput &)const; // _ZNK13EffectCommand5clearERK13CommandOriginR13CommandOutput
};
