#pragma once

#include "../Command.h"


class WSServerCommand : public Command {

public:
    virtual ~WSServerCommand(); // _ZN15WSServerCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15WSServerCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN15WSServerCommand5setupER15CommandRegistry
    WSServerCommand(); // _ZN15WSServerCommandC2Ev
};
