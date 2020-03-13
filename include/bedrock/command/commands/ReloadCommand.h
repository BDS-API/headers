#pragma once

#include "../Command.h"


class ReloadCommand : Command {

public:
    ~ReloadCommand(); // _ZN13ReloadCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK13ReloadCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN13ReloadCommand5setupER15CommandRegistry
    ReloadCommand(); // _ZN13ReloadCommandC2Ev
};
