#pragma once

class AgentCommands::Command {

    virtual ~Command();
    virtual ~Command();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
