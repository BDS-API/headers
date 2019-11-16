#pragma once

class AgentCommands::DetectRedstoneCommand : AgentCommands::Command {

    virtual ~DetectRedstoneCommand();
    virtual ~DetectRedstoneCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
