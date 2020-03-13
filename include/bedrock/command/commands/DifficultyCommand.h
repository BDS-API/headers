#pragma once

#include "../Command.h"


class DifficultyCommand : Command {

public:
    ~DifficultyCommand(); // _ZN17DifficultyCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK17DifficultyCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN17DifficultyCommand5setupER15CommandRegistry
    DifficultyCommand(); // _ZN17DifficultyCommandC2Ev
};
