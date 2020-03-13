#pragma once

#include "../Command.h"


class GameModeCommand : Command {

public:
    ~GameModeCommand(); // _ZN15GameModeCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15GameModeCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN15GameModeCommand5setupER15CommandRegistry
    GameModeCommand(); // _ZN15GameModeCommandC2Ev
};
