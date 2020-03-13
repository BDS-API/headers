#pragma once

#include "../Command.h"


class WSServerCommand : Command {

public:
    ~WSServerCommand(); // _ZN15WSServerCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15WSServerCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN15WSServerCommand5setupER15CommandRegistry
    WSServerCommand(); // _ZN15WSServerCommandC2Ev
};
