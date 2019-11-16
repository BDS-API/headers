#pragma once

class AgentCommands::MoveCommand : AgentCommands::Command {

    virtual void ~MoveCommand();
    virtual void ~MoveCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
