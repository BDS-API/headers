#pragma once

class AgentCommands::InspectDataCommand : AgentCommands::Command {

    virtual void ~InspectDataCommand();
    virtual void ~InspectDataCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
