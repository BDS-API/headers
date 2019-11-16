#pragma once

class AbilityCommand : Command {

    virtual ~AbilityCommand();
    virtual ~AbilityCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
