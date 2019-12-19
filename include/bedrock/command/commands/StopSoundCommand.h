#pragma once

class StopSoundCommand : Command {

public:
    virtual StopSoundCommand::~StopSoundCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    StopSoundCommand(void);
};
