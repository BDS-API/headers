#pragma once

class AgentCommands::Command {

    virtual void ~Command();
    virtual void ~Command();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
