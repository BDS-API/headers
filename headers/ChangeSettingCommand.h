#pragma once

class ChangeSettingCommand : ServerCommand {

    virtual void ~ChangeSettingCommand();
    virtual void ~ChangeSettingCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
