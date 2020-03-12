#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class ParticleCommand : Command {

public:
    ~ParticleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    ParticleCommand();
};
