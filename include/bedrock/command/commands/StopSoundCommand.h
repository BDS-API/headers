#pragma once

#include "../Command.h"


class StopSoundCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~StopSoundCommand();
    void setup(CommandRegistry &);
    StopSoundCommand();
};
