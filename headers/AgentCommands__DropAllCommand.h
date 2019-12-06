#pragma once

class AgentCommands::DropAllCommand : AgentCommands::Command {

public:
    virtual ~DropAllCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void DropAllCommand(Player &, AgentCommands::Direction);
};
