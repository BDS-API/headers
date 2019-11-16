#pragma once

class AgentCommands::CollectCommand : AgentCommands::Command {

    virtual void ~CollectCommand();
    virtual void ~CollectCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
