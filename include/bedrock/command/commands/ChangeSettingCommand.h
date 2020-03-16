#pragma once

#include "ServerCommand.h"


class ChangeSettingCommand : public ServerCommand {

public:
    virtual ~ChangeSettingCommand(); // _ZN20ChangeSettingCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK20ChangeSettingCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN20ChangeSettingCommand5setupER15CommandRegistry
    ChangeSettingCommand(); // _ZN20ChangeSettingCommandC2Ev
};
