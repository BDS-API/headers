#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class StopSoundCommand : Command {

public:
    virtual StopSoundCommand::~StopSoundCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    StopSoundCommand(void);
};
