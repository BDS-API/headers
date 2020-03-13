#pragma once

#include "../Command.h"


class ParticleCommand : Command {

public:
    ~ParticleCommand(); // _ZN15ParticleCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15ParticleCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN15ParticleCommand5setupER15CommandRegistry
    ParticleCommand(); // _ZN15ParticleCommandC2Ev
};
