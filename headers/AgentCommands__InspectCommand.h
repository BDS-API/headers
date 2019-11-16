#pragma once

class AgentCommands::InspectCommand : AgentCommands::Command {

    virtual ~InspectCommand();
    virtual ~InspectCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
