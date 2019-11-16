#pragma once

class KillCommand : Command {

    virtual ~KillCommand();
    virtual ~KillCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
