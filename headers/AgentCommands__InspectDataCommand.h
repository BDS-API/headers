#pragma once

class AgentCommands::InspectDataCommand : AgentCommands::Command {

    virtual ~InspectDataCommand();
    virtual ~InspectDataCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
