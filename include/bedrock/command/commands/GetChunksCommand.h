#pragma once

#include "../Command.h"


class GetChunksCommand : public Command {

public:
    virtual ~GetChunksCommand(); // _ZN16GetChunksCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK16GetChunksCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN16GetChunksCommand5setupER15CommandRegistry
    GetChunksCommand(); // _ZN16GetChunksCommandC2Ev
};
