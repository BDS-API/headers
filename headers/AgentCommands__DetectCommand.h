#pragma once

class AgentCommands::DetectCommand : AgentCommands::Command {

    virtual ~DetectCommand();
    virtual ~DetectCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
