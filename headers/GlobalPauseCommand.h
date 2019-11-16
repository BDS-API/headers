#pragma once

class GlobalPauseCommand : ServerCommand {

    virtual ~GlobalPauseCommand();
    virtual ~GlobalPauseCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
