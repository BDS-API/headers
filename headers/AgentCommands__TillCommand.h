#pragma once

class AgentCommands::TillCommand : AgentCommands::Command {

    virtual ~TillCommand();
    virtual ~TillCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
