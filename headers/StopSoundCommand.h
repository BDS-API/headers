#pragma once

class StopSoundCommand : Command {

public:
    virtual ~StopSoundCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void StopSoundCommand(void);
};
