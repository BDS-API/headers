#pragma once

#include "../Command.h"


class GetSpawnPointCommand : public Command {

public:
    virtual ~GetSpawnPointCommand(); // _ZN20GetSpawnPointCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK20GetSpawnPointCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN20GetSpawnPointCommand5setupER15CommandRegistry
    GetSpawnPointCommand(); // _ZN20GetSpawnPointCommandC2Ev
};
