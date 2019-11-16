#pragma once

class ServerCommand : Command {

    virtual ~ServerCommand();
    virtual ~ServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
