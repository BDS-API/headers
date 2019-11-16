#pragma once

class KickCommand : ServerCommand {

    virtual void ~KickCommand();
    virtual void ~KickCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
