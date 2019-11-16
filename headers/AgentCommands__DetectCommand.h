#pragma once

class AgentCommands::DetectCommand : AgentCommands::Command {

    virtual void ~DetectCommand();
    virtual void ~DetectCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
