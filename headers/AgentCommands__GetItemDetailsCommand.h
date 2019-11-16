#pragma once

class AgentCommands::GetItemDetailsCommand : AgentCommands::Command {

    virtual void ~GetItemDetailsCommand();
    virtual void ~GetItemDetailsCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
