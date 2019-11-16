#pragma once

class AgentCommands::MoveCommand : AgentCommands::Command {

    virtual ~MoveCommand();
    virtual ~MoveCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
