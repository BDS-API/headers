#pragma once

#include "../Command.h"


class PlaySoundCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~PlaySoundCommand();
    PlaySoundCommand();
    void setup(CommandRegistry &);
};
