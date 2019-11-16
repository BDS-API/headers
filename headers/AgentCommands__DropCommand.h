#pragma once

class AgentCommands::DropCommand : AgentCommands::Command {

    virtual ~DropCommand();
    virtual ~DropCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
