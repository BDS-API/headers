#pragma once

class SaveCommand : ServerCommand {

    virtual void ~SaveCommand();
    virtual void ~SaveCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
