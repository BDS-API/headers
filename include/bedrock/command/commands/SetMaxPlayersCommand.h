#pragma once

#include "ServerCommand.h"


class SetMaxPlayersCommand : public ServerCommand {

public:
    virtual ~SetMaxPlayersCommand(); // _ZN20SetMaxPlayersCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK20SetMaxPlayersCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN20SetMaxPlayersCommand5setupER15CommandRegistry
    SetMaxPlayersCommand(); // _ZN20SetMaxPlayersCommandC2Ev
};
