#pragma once

class PlaySoundCommand : Command {

public:
    virtual ~PlaySoundCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void PlaySoundCommand(void);
};
