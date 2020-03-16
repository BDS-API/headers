#pragma once

#include "../Command.h"


class GetChunkDataCommand : public Command {

public:
    virtual ~GetChunkDataCommand(); // _ZN19GetChunkDataCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK19GetChunkDataCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN19GetChunkDataCommand5setupER15CommandRegistry
    GetChunkDataCommand(); // _ZN19GetChunkDataCommandC2Ev
};
