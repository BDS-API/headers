#pragma once

class AgentCommands::PlaceCommand : AgentCommands::Command {

    virtual ~PlaceCommand();
    virtual ~PlaceCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
