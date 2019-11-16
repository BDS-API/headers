#pragma once

class GlobalPauseCommand : ServerCommand {

    virtual void ~GlobalPauseCommand();
    virtual void ~GlobalPauseCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
