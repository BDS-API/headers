#pragma once

class AgentCommands::PlaceCommand : AgentCommands::Command {

    virtual void ~PlaceCommand();
    virtual void ~PlaceCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
