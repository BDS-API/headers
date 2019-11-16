#pragma once

class AgentCommands::DropAllCommand : AgentCommands::Command {

    virtual void ~DropAllCommand();
    virtual void ~DropAllCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
