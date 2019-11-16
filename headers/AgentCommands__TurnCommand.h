#pragma once

class AgentCommands::TurnCommand : AgentCommands::Command {

    virtual void ~TurnCommand();
    virtual void ~TurnCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
