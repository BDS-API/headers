#pragma once

class AgentCommands::DestroyCommand : AgentCommands::Command {

    virtual ~DestroyCommand();
    virtual ~DestroyCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
