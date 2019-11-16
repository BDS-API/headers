#pragma once

class AgentCommands::CollectCommand : AgentCommands::Command {

    virtual ~CollectCommand();
    virtual ~CollectCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
