#pragma once

class OpCommand : ServerCommand {

    virtual void ~OpCommand();
    virtual void ~OpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
