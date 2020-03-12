#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class ChangeSettingCommand : ServerCommand {

public:
    ~ChangeSettingCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ChangeSettingCommand();
    void setup(CommandRegistry &);
};
