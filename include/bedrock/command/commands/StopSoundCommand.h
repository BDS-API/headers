#pragma once

#include "../Command.h"


class StopSoundCommand : public Command {

public:
    virtual ~StopSoundCommand(); // _ZN16StopSoundCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK16StopSoundCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN16StopSoundCommand5setupER15CommandRegistry
    StopSoundCommand(); // _ZN16StopSoundCommandC2Ev
};
