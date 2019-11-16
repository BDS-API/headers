#pragma once

class OpCommand : ServerCommand {

    virtual ~OpCommand();
    virtual ~OpCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
