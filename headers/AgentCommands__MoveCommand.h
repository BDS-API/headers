#pragma once

class AgentCommands::MoveCommand : AgentCommands::Command {

    virtual void AgentCommands::MoveCommand::~MoveCommand();
    virtual void AgentCommands::MoveCommand::~MoveCommand();
    virtual void execute(void);
    virtual void isDone(void);
    virtual void tick(void);
    virtual void fireCommandDoneEvent(void);
}
