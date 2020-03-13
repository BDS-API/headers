#pragma once

#include "ServerCommand.h"


class ChangeSettingCommand : ServerCommand {

public:
    ~ChangeSettingCommand(); // _ZN20ChangeSettingCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK20ChangeSettingCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN20ChangeSettingCommand5setupER15CommandRegistry
    ChangeSettingCommand(); // _ZN20ChangeSettingCommandC2Ev
};
