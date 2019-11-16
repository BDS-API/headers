#pragma once

class AgentCommands::AttackCommand : AgentCommands::Command {

    virtual void ~AttackCommand();
    virtual void ~AttackCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
