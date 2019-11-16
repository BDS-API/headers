#pragma once

class ChangeSettingCommand : ServerCommand {

    virtual ~ChangeSettingCommand();
    virtual ~ChangeSettingCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
