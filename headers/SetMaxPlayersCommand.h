#pragma once

class SetMaxPlayersCommand : ServerCommand {

    virtual ~SetMaxPlayersCommand();
    virtual ~SetMaxPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
