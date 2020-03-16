#pragma once

#include "../Command.h"


class LocateCommand : public Command {

public:
    virtual ~LocateCommand(); // _ZN13LocateCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK13LocateCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN13LocateCommand5setupER15CommandRegistry
    LocateCommand(); // _ZN13LocateCommandC2Ev
};
