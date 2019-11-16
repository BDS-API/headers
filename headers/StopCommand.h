#pragma once

class StopCommand : Command {

    virtual ~StopCommand();
    virtual ~StopCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
