#pragma once

class ExecuteCommand : Command {

    virtual ~ExecuteCommand();
    virtual ~ExecuteCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
