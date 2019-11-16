#pragma once

class AgentCommands::DestroyCommand : AgentCommands::Command {

    virtual void AgentCommands::DestroyCommand::~DestroyCommand();
    virtual void AgentCommands::DestroyCommand::~DestroyCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
