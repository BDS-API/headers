#pragma once

class ParticleCommand : Command {

public:
    virtual ~ParticleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void ParticleCommand(void);
};
