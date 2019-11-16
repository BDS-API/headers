#pragma once

class AgentCommands::Command {

    virtual void AgentCommands::Command::~Command();
    virtual void AgentCommands::Command::~Command();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
