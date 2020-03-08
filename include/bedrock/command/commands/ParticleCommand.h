#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class ParticleCommand : Command {

public:
    virtual ParticleCommand::~ParticleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    ParticleCommand(void);
};
