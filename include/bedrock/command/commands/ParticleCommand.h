#pragma once

class ParticleCommand : Command {

public:
    virtual ParticleCommand::~ParticleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ParticleCommand(void);
};
