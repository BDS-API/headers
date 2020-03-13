#pragma once

#include "../Command.h"


class PlaySoundCommand : Command {

public:
    ~PlaySoundCommand(); // _ZN16PlaySoundCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK16PlaySoundCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN16PlaySoundCommand5setupER15CommandRegistry
    PlaySoundCommand(); // _ZN16PlaySoundCommandC2Ev
};
