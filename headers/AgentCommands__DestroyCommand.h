#pragma once

class AgentCommands::DestroyCommand : AgentCommands::Command {

public:
    virtual ~DestroyCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void DestroyCommand(Player &, AgentCommands::Direction);
};
