#pragma once

class AgentCommands::AttackCommand : AgentCommands::Command {

    virtual ~AttackCommand();
    virtual ~AttackCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
