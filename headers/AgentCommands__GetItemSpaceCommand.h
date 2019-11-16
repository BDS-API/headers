#pragma once

class AgentCommands::GetItemSpaceCommand : AgentCommands::Command {

    virtual ~GetItemSpaceCommand();
    virtual ~GetItemSpaceCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
