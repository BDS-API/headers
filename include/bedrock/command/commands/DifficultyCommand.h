#pragma once

#include "../Command.h"


class DifficultyCommand : public Command {

public:
    virtual ~DifficultyCommand(); // _ZN17DifficultyCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK17DifficultyCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN17DifficultyCommand5setupER15CommandRegistry
    DifficultyCommand(); // _ZN17DifficultyCommandC2Ev
};
