#pragma once

#include "../Command.h"


class GetEduServerInfoCommand : Command {

public:
    ~GetEduServerInfoCommand(); // _ZN23GetEduServerInfoCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK23GetEduServerInfoCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN23GetEduServerInfoCommand5setupER15CommandRegistry
    GetEduServerInfoCommand(); // _ZN23GetEduServerInfoCommandC2Ev
};
