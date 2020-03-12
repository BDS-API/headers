#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class PlaySoundCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~PlaySoundCommand();
    void setup(CommandRegistry &);
    PlaySoundCommand();
};
