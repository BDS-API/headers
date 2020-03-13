#pragma once

#include "../Command.h"


class GetChunkDataCommand : Command {

public:
    ~GetChunkDataCommand(); // _ZN19GetChunkDataCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK19GetChunkDataCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN19GetChunkDataCommand5setupER15CommandRegistry
    GetChunkDataCommand(); // _ZN19GetChunkDataCommandC2Ev
};
