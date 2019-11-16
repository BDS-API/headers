#pragma once

class KickCommand : ServerCommand {

    virtual ~KickCommand();
    virtual ~KickCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
