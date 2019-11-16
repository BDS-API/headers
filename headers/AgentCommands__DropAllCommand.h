#pragma once

class AgentCommands::DropAllCommand : AgentCommands::Command {

    virtual ~DropAllCommand();
    virtual ~DropAllCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
