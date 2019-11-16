#pragma once

class TeleportCommand : Command {

    virtual ~TeleportCommand();
    virtual ~TeleportCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
