#pragma once

#include "../Command.h"


class GetTopSolidBlockCommand : public Command {

public:
    virtual ~GetTopSolidBlockCommand(); // _ZN23GetTopSolidBlockCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK23GetTopSolidBlockCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN23GetTopSolidBlockCommand5setupER15CommandRegistry
    GetTopSolidBlockCommand(); // _ZN23GetTopSolidBlockCommandC2Ev
};
