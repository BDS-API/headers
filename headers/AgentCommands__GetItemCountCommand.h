#pragma once

class AgentCommands::GetItemCountCommand : AgentCommands::Command {

    virtual void ~GetItemCountCommand();
    virtual void ~GetItemCountCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
