#pragma once

#include "ServerCommand.h"


class ChangeSettingCommand : ServerCommand {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~ChangeSettingCommand();
    void setup(CommandRegistry &);
    ChangeSettingCommand();
};
