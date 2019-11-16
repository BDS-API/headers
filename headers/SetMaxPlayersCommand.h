#pragma once

class SetMaxPlayersCommand : ServerCommand {

    virtual void ~SetMaxPlayersCommand();
    virtual void ~SetMaxPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
