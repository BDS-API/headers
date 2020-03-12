#pragma once

#include "../Command.h"


class ParticleCommand : Command {

public:
    ~ParticleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    ParticleCommand();
};
