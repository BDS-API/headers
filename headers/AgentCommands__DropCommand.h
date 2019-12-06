#pragma once

class AgentCommands::DropCommand : AgentCommands::Command {

public:
    virtual ~DropCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void DropCommand(Player &, int, int, AgentCommands::Direction);
};
