#pragma once

class AgentCommands::TillCommand : AgentCommands::Command {

    virtual void ~TillCommand();
    virtual void ~TillCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
