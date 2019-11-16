#pragma once

class ListCommand : ServerCommand {

    virtual void ~ListCommand();
    virtual void ~ListCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
