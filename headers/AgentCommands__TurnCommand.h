#pragma once

class AgentCommands::TurnCommand : AgentCommands::Command {

    virtual ~TurnCommand();
    virtual ~TurnCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
