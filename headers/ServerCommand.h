#pragma once

class ServerCommand : Command {

    virtual void ServerCommand::~ServerCommand();
    virtual void ServerCommand::~ServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
