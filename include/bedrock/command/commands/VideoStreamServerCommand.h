#pragma once

#include "../Command.h"


class VideoStreamServerCommand : public Command {

public:
    virtual ~VideoStreamServerCommand(); // _ZN24VideoStreamServerCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK24VideoStreamServerCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN24VideoStreamServerCommand5setupER15CommandRegistry
    VideoStreamServerCommand(); // _ZN24VideoStreamServerCommandC2Ev
};
