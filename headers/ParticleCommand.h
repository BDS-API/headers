#pragma once

class ParticleCommand : Command {

    virtual ~ParticleCommand();
    virtual ~ParticleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
