#pragma once

class AgentCommand : Command {

    virtual ~AgentCommand();
    virtual ~AgentCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
