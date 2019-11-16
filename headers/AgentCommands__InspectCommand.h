#pragma once

class AgentCommands::InspectCommand : AgentCommands::Command {

    virtual void ~InspectCommand();
    virtual void ~InspectCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
