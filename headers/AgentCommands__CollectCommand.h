#pragma once

class AgentCommands::CollectCommand : AgentCommands::Command {

    virtual void AgentCommands::CollectCommand::~CollectCommand();
    virtual void AgentCommands::CollectCommand::~CollectCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
