#pragma once

#include "../Command.h"


class SpawnPointCommand : Command {

public:
    ~SpawnPointCommand(); // _ZN17SpawnPointCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK17SpawnPointCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN17SpawnPointCommand5setupER15CommandRegistry
    SpawnPointCommand(); // _ZN17SpawnPointCommandC2Ev
};
